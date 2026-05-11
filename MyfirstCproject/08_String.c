#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    //1.Write a small program that will capitalize all the letters of a string
    char upper[40];
    printf("Enter the text: ");
    fgets(upper, sizeof(upper), stdin);
    upper[strlen(upper) - 1] = '\0';
    for(int i=0; upper[i] != '\0'; i++){
        strupr(upper); // convert to
    }
    printf("The Capitalize is: %s\n", upper);
    printf("\n");

   //2.Write a small program that counts the total numbers of vowels and their frequency.
    char counts[40];
    strcpy(counts, upper);
    //strlwr(counts); // convert to lowercase
    printf("%s\n", counts);
    int a=0, e=0, i=0, o=0, u=0;
    int total=0;
    int j=0;
    while(counts[j] != '\0'){
        switch(counts[j]){
            case 'a':
            case 'A':
                a++;
                total++;
                break;
            case 'e':
            case 'E':
                e++;
                total++;
                break;
            case 'i':
            case 'I':
                i++;
                total++;
                break;
            case 'o':
            case 'O':
                o++;
                total++;
                break;
            case 'u':
            case 'U':
                u++;
                total++;
                break;
        }
        j++;
    }
    printf("The number of vowel is: %d\n", total);
    printf("a or A is: %d\n", a);
    printf("e or E is: %d\n", e);
    printf("i or I is: %d\n", i);
    printf("o or O is: %d\n", o);
    printf("u or U is: %d\n", u);
    return 0;
}
