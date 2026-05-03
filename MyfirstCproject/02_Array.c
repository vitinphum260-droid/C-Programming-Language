#include <stdio.h>
#include <stdlib.h>
int main() {
    // replace odd index by -1
    int arrayNum[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0;
    for(int i = 0; i < 10; i++){
        printf("%d\t", arrayNum[i]);
    }
    printf("\n");
    for(int i=1; i<10; i+=2){
        //printf(" %d", arrayNum[i] ); // need space before %d
        arrayNum[i]= -1;
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf(" %d\t", arrayNum[i]); //need space before %d
    }
}
