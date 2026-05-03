#include <stdio.h>
int main() {
    int x, y;
    x = 10;
    y = 15;
    x = x++;
    y = ++y; // y =1+15=16 ,16 is a new value that stored in y
    printf("X = %d\n", x);
    //printf("Y = %d\n", ++y);
    printf("Y = %d\n", y++); // y = 16
    printf("Y = %d\n", y ); //  y = 17
    printf("X = %d\n", x ); //10
    printf("Is x smaller than y? %d\n", x<y ); // 10<16 True
    printf("X = %d\n", x++); //10
    printf("X = %d\n", ++x); //12
    printf("Is x larger than y? %d\n", x>y ); //12>16 false ,it is compare two variable or two values
    printf("Is y equal to 17? %d\n", y==17 ); //17==17 True
    return 0;

}
