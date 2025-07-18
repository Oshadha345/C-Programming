#include <stdio.h>
#include <windows.h> // For Sleep()


//helper function to hide blinknig cursor 
void show_console_cursor(int show) {
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(out, &cursor_info);
    cursor_info.bVisible = show;
    SetConsoleCursorInfo(out, &cursor_info);
}

int main() {

    // initialize variables
   char *pattern[5] = {".","..","...","....","....."};
   const int delay_miliseconds = 1000; // 0.1 seconds
   int rotation_index = 0;


    printf("Loading");
    show_console_cursor(0); // Hide the cursor

    for (int i = 0; i < 10; i++) {
        printf("\rLoading %s", pattern[i%5]);

     
        fflush(stdout);
        Sleep(delay_miliseconds);

        if (i % 5 == 4){
            // Clear the line after every 5 iterations
            printf("\r             ");

        }
    }

    show_console_cursor(1); // Show the cursor again
    printf("Loading complete!\n");

    return 0;
}