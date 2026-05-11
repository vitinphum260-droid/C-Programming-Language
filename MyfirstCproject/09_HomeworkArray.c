#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int A[3][3];
    int B[3][3];
    int C[3][3];
    srand(time(0));
    int i,j,k;
    //Matrix A
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            A[i][j] = rand() % 10;
        }
    }
    //Matrix B
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            B[i][j] = rand() % 10;
        }
    }
    //Matrix C
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = 0;
        }
    }
    //Multiplies Matrices
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
    //Print Matrix A
    printf("Matrix A is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    //Print Matrix B
    printf("Matrix B is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }
    //Print the Result of Multiplies Matrices
    printf("Multiplies Matrices is:C = A * B \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
