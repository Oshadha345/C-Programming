#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 80
#define HEIGHT 24
#define BUFFER_SIZE (WIDTH * (HEIGHT + 2))

// Enable ANSI escape sequences in Windows console
void enable_vt_mode() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}

int main() {
    int b[BUFFER_SIZE] = {0};
    char display_chars[] = " .:*#$H@";
    
    // Enable VT mode
    enable_vt_mode();
    
    // Clear screen and hide cursor
    printf("\x1b[2J\x1b[?25l");
    
    // Animation loop
    for(;;) {
        // Move cursor to top left
        printf("\x1b[H");
        
        // Update and display
        for(int j = 1; j < BUFFER_SIZE - WIDTH; j++) {
            // Update wave values
            if(j < BUFFER_SIZE - WIDTH) {
                b[j] = (b[j+WIDTH-1] + b[j+WIDTH] + b[j] + b[j-1] + b[j+WIDTH+1]) / 5;
            }
            
            // Only display the visible area
            if(j < WIDTH * HEIGHT) {
                // Display character based on value
                putchar(display_chars[b[j] >> 5 < 8 ? b[j] >> 5 : 7]);
                
                // Add newline at end of row
                if(j % WIDTH == WIDTH - 1) {
                    putchar('\n');
                }
            }
        }
        
        // Add random values at the bottom
        for(int j = BUFFER_SIZE - WIDTH; j < BUFFER_SIZE; j++) {
            b[j] = (rand() % 4 == 0) ? 512 : 0;
        }
        
        // Flush output to ensure it displays
        fflush(stdout);
        
        // Delay
        Sleep(50);
    }
    
    return 0;
}