#include <stdio.h>
int main()
{
    int x = 10, y = 20,sum;
    sum = x + y;
    printf("Result of sum is: %d\n", sum);

    float a = 30.5, b = 40.5, divide;
    divide = a/b;
    printf("Result of divide is: %.3f\n", divide);

    printf("/%f/\n", 1234.56);
    printf("/%e/\n", 1234.56);
    printf("/%4.f/\n", 1234.56);
    printf("/%3.1f/\n", 1234.56);
    printf("/%-10.3f/\n", 1234.56);
    printf("/%10.3f/\n", 1234.56);
    printf("/%10.3e/\n", 1234.56);
    printf("/%3.1f/\n", 1234.0678);
    return 0;



}
