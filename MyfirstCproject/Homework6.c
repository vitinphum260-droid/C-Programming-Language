#include <stdio.h>
#include <stdlib.h>
int main() {
    //1.While Loop
    // Version1
    int i = 0;
    while(i < 50){
        printf("[%d] *\n", i);
        i++;
    }
    printf("Finish loop.\n");
    return 0;
    // Version2
    /*int i = 1;
    while(i <= 50){
        printf("[%d] *\n", i);
        i++;
    }
    printf("End loop.");
    return 0;*/
    // Version3
    /*int i = 50;
    while(i > 0){
        printf("[%d] *\n", i);
        i--;
    }
    printf("Finish loop.\n");
    return 0;*/
    // 2.
    /*int n, a, i=1, sum=0;
    float average;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    while(i<=n){ // when condition is false it will process outside the loop
        printf("Enter one number to sum: ");
        scanf("%d", &a);
        sum+=a; // sum= sum+a;
        i++;
    }
    printf("Sum is: %d\n", sum);
    average = (float)sum/n; // covert integer of sum to float
    printf("The Average is: %.2f\n", average);*/

    /*int k=0, j=5; // this just a test when we use two loop
    while(k<=j){
        printf("%d.Hello.\n", k);
        k++;
    }*/
}
