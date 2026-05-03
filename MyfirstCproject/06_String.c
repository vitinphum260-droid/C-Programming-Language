#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    // write program to change character in string
    char dataStr1[20]; // original value
    char dataStr2[20]; // copy from original
    char dataStr3[20];
    char dataStr4[20];
    printf("Enter character less than 20: ");
    scanf("%s", dataStr1);
    /*gets(dataStr1);  // unsafe
    fgets(dataStr1, sizeof(dataStr1), stdin); // use for input // safe
    dataStr1[strlen(dataStr1) - 1] = '\0'; // use to delete new line*/

    strcpy(dataStr2, dataStr1); // Function string copy to copy value from original value
    dataStr2[0] = 'A';
    dataStr2[1] = 'B';
    printf("Changed Character: \t\t%s\n", dataStr2);

    strcpy(dataStr3, dataStr1);
    for(int i=0; i < strlen(dataStr3); i+=2){
            dataStr3[i] = 'Z';
    }
    printf("Change first character to Z: \t%s\n", dataStr3);

    strcpy(dataStr4, dataStr1);
    for(int i=1; i < strlen(dataStr4); i+=2) {
            dataStr4[i] = 'X';
    }
    printf("Change second character to X: \t%s\n", dataStr4);
    return 0;
}
