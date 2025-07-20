#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* input() {
    // Allocate memory for input
    char* str = (char*)malloc(sizeof(char) * 100);

    if (str == NULL) {
        return NULL; // Memory allocation failed
    }

    // Clear input buffer
    scanf("\n");

    // Read input
    fgets(str, 100, stdin);

    // Check if fgets was successful
    if (str == NULL) {
        free(str);
        return NULL;
    }
    
    // Remove newline
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    return str; // Caller must free this memory!
}

    



int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    // Input a character
    printf("Input a character: ");
    scanf("%c", &ch);

    // Input a string
    printf("Input a string: ");
    scanf("%s", s);  // No & needed for arrays
    
    
    // Input a sentence
    printf("Input a sentence: ");
    // Clear the input buffer before fgets
    scanf("\n");  // This consumes any whitespace including newline
    fgets(sen, sizeof(sen), stdin);
    
    // Remove trailing newline
    size_t len = strlen(sen);
    if (len > 0 && sen[len-1] == '\n'){
        sen[len-1] = '\0';
    }  

    // Input a string using the input function
    printf("Input a string: ");
    char* str1 = input();
    
    printf("\nYou entered:\n");

    // Print the inputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    printf("%s", str1);
    free(str1);  // Don't forget to free the allocated memory

    return 0;
}