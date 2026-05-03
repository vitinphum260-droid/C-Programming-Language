#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Write a program to find Minimum and Maximum value in array of 10 elements
    // (value of each array element will be generated randomly)
    int myArray[10];
    int i;
    srand(time(NULL)); //We use it to seed the generator so that the numbers change every time the program is executed
    for(i=0; i<10; i++){
        myArray[i] = rand() % 100; //generates a random number between 0 to 99
        printf("%d\t", myArray[i]);
    }
    int max = myArray[0];
    int min = myArray[0];
    for(i=0; i< 10; i++){
        if(max < myArray[i])
            max = myArray[i];
        if(min > myArray[i])
            min = myArray[i];
    }
    printf("\n\n");
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);
    return 0;
}
