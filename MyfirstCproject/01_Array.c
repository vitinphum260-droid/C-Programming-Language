#include <stdio.h>
int main() {
    // reverse element in array
    int arrayA[5] = {10,15,20,100,30};
    int arrayB[5];
    int i;
    for(int i = 0; i < 5; i++) {
        printf("%d\t",arrayA[i]);
    }
    for(int i = 0; i < 5; i++) {
        arrayB[i] = arrayA[4 - i];
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%d\t", arrayB[i]);
    }
    return 0;
}
