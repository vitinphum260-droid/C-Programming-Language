#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10], n, i, s=0;
    float average;
    for(i=0; i< 10; ++i)
        a[i] = 0;
        //printf("%d\t", a[i]);
    printf("\nEnter the number of entries: ");
    scanf("%d",&n);
    if(n > 10){
        printf("\nToo many numbers");
        exit(0);
    }
    for(i=0; i<n; i++){
        printf("Enter the element of array: ");
        scanf("%d",&a[i]);
        s+=a[i];
    }
    average = (float)s/n;
    printf("\nSum = %d\n", s);
    printf("Average = %.2f\n", average);
    printf("Numbers greater than the average: \n");
    for(i=0; i<n; i++){
        if(a[i] > average)
            printf("[%d] %d\n", i, a[i]);
    }
}
