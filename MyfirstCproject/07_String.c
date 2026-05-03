#include <stdio.h>
#include <string.h>
int main(){
    // Declaration
    //char city[30] = "Phnom Penh";
    char city[30];

    fgets(city, sizeof(city), stdin); // input text has space
    city[strlen(city)-1] = '\0'; // delate new line

    // Character Modification
    city[0] = 'A';
    city[2] = 'Z';

    // Output
    printf("%s\n", city);
    puts(city);
    return 0;

}
