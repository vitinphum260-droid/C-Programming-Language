#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //write a program in c to count odd and even numbers in array of 10 elements
    int arrayCount[10];
    int odd = 0, even = 0;
    int i = 0;
    srand(time(NULL)); //We use srand(time(NULL)) to seed the generator so that the numbers change every time the program is executed.
    for(i=0; i<10; i++){
        arrayCount[i] = rand() % 100; // generates a random number between 0 to 99
        printf("%d\t", arrayCount[i]);
    }
    for(i=0; i<10; i++) {
        if(arrayCount[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("\n");
    printf("The Even number is: %d\n", even);
    printf("The Odd number is: %d\n", odd);
    return 0;
}
