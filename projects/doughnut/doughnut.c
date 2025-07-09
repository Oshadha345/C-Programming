#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h> // Add this for Windows-specific functions

#define PI 3.14159265358979323846

// Screen dimensions should be defined
const int screen_width = 80;   // Adjust as needed
const int screen_height = 24;  // Adjust as needed

const float theta_spacing = 0.07;
const float phi_spacing = 0.02;

const float R1 = 1;
const float R2 = 2;
const float K2 = 5;
// Calculate K1 based on screen size
const float K1 = screen_width*K2*3/(8*(R1+R2));

void enable_vt_mode() {
    // Enable ANSI escape sequences in Windows console
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}

void set_console_size(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Set the screen buffer size
    COORD bufferSize = {width, height + 5}; // Add extra lines for buffer
    SetConsoleScreenBufferSize(hConsole, bufferSize);
    
    // Set the console window size
    SMALL_RECT windowSize = {0, 0, width - 1, height - 1};
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

void render_frame(float A, float B) {
  // precompute sines and cosines of A and B
  float cosA = cos(A), sinA = sin(A);
  float cosB = cos(B), sinB = sin(B);

  char output[screen_height][screen_width];
  float zbuffer[screen_height][screen_width];
  
  // Initialize arrays properly
  for(int j = 0; j < screen_height; j++) {
    for(int i = 0; i < screen_width; i++) {
      output[j][i] = ' ';
      zbuffer[j][i] = 0;
    }
  }

  // theta goes around the cross-sectional circle of a torus
  for (float theta = 0; theta < 2*PI; theta += theta_spacing) {
    // precompute sines and cosines of theta
    float costheta = cos(theta), sintheta = sin(theta);

    // phi goes around the center of revolution of a torus
    for(float phi = 0; phi < 2*PI; phi += phi_spacing) {
      // precompute sines and cosines of phi
      float cosphi = cos(phi), sinphi = sin(phi);
    
      // the x,y coordinate of the circle, before revolving
      float circlex = R2 + R1*costheta;
      float circley = R1*sintheta;

      // final 3D (x,y,z) coordinate after rotations
      float x = circlex*(cosB*cosphi + sinA*sinB*sinphi) - circley*cosA*sinB; 
      float y = circlex*(sinB*cosphi - sinA*cosB*sinphi) + circley*cosA*cosB;
      float z = K2 + cosA*circlex*sinphi + circley*sinA;
      float ooz = 1/z;  // "one over z"
      
      // x and y projection
      int xp = (int) (screen_width/2 + K1*ooz*x);
      int yp = (int) (screen_height/2 - K1*ooz*y);
      
      // calculate luminance
      float L = cosphi*costheta*sinB - cosA*costheta*sinphi -
        sinA*sintheta + cosB*(cosA*sintheta - costheta*sinA*sinphi);

      // Only process if surface faces viewer and coordinates are in bounds
      if (L > 0 && xp >= 0 && xp < screen_width && yp >= 0 && yp < screen_height) {
        if(ooz > zbuffer[yp][xp]) {
          zbuffer[yp][xp] = ooz;
          int luminance_index = (int)(L*8);
          // Ensure luminance_index is in bounds
          if(luminance_index > 11) luminance_index = 11;
          output[yp][xp] = ".,-~:;=!*#$@"[luminance_index];
        }
      }
    }
  }

  // Clear screen and output the frame
  printf("\x1b[H");
  for (int j = 0; j < screen_height; j++) {
    for (int i = 0; i < screen_width; i++) {
      putchar(output[j][i]);
    }
    putchar('\n');
  }
}

int main() {
    // Enable VT mode for Windows
    enable_vt_mode();
    
    // Set larger console size
    set_console_size(100, 40); // Try these dimensions
    
    // Clear screen and hide cursor
    printf("\x1b[2J\x1b[?25l");
    
    // Animation loop
    float A = 0, B = 0;
    for(;;) {
        render_frame(A, B);
        A += 0.04;
        B += 0.02;
        
        // Better delay method
        Sleep(50); // 50ms delay (Windows-specific)
    }
    
    // Show cursor again (in case the program exits)
    printf("\x1b[?25h");
    return 0;
}