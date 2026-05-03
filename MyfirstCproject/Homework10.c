#include <stdio.h>
int main() {
    int row, col;
    /*int sum = 0;
    for(int row = 1;row<=10;++row) {
        for(col = 1; col<=10; ++col){
            sum = row * col;
            printf("%d x %d = %d\t", row, col, sum);
            printf("\n");
        }
        printf("\n");
    }*/
    row, col; // this is a sharing variable and don't declare data type again.
    for(int row = 1;row<=4;++row) {
        for(col = 1; col<=row; ++col)
            printf("*\t");
            printf("\n");

    }
    //printf("\n");

    int index, total;
    for(total = 0, index = 0; index < 10; index+=1){
        if(index>5){
            total+=index;
            //printf("%d\n", index);
            //printf("%d + %d = %d\n", total, index, total);
        }
        else if(index<5){
            total-=index;
            // printf("%d - %d = %d\n", total, index, total);
        }
    }
    printf("The Total is: %d\n", total);
    return 0;
}
