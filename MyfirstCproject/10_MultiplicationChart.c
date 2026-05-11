#include <stdio.h>
int main() {
    int mul[11][11];
    int i,j;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            mul[i][j] = i * j;
        }
    }
    //print result
    for(i=1; i<=10; i++){
            printf("The Multiplication of %d is: \n", i);
        for(j=1; j<=10; j++){
            printf("%d x %d = %d\n", i, j, mul[i][j]);
        }
        printf("\n");
    }
}
