#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter number of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Find maximum of three value\n");
    if(a > b) {
        if(a > c) {
            printf("Maximum is a: %d\n", a);
        }else
            printf("Maximum is c: %d\n", c);
    }else { // a < b
        if(b > c) {
            printf("Maximum is b: %d\n", b);
        }else
            printf("Maximum is c: %d\n", c);
    }
    return 0;
}
