//Signal Label extractor

#include <stdio.h>
#include <string.h>


void extract_label(char *str){
    char label[100];

    char *underscore_pos = strchr(str,'_');

    if (underscore_pos != NULL) {
        int length = underscore_pos - str;

        strncpy(label, str, length);

        label[length] = '\0';

        printf("Label: %s\n",label);
    }else{
        printf("No underscore, given label: %s",str);
    }

}

int main() {
    char signals[3][100];

    //taking signlas with labels
    printf("Enter 3 signal strings(SensorA_12.5V) :\n");
    for (int i=0;i<3;i++){
        printf("Signal[%d] = ",i+1);
        scanf("%s",signals[i]);
    }

    printf("\nExtracted labels:\n");
    for (int i=0;i<3;i++){
        extract_label(signals[i]);
    }

    return 0;


}