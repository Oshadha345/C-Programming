#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);  // No & needed for arrays
    
    // Clear the input buffer before fgets
    scanf("\n");  // This consumes any whitespace including newline
    
    fgets(sen, sizeof(sen), stdin);
    
    // Remove trailing newline
    size_t len = strlen(sen);
    if (len > 0 && sen[len-1] == '\n'){
        sen[len-1] = '\0';
    }  
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}