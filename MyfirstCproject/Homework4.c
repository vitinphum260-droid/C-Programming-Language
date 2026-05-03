   #include <stdio.h>
#include <math.h>
int main()
{
    // Ternary Operator have (condition) ? expression 1 : expression 2
    /*int a, b;
    printf("Enter two number a and b: ");
    scanf("%d %d", &a, &b);
    (a==b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    (a>b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    (a<b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    (a>=b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    (a<=b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    (a!=b) ? printf("A = %d\n", a) : printf("B = %d\n", b);
    return 0;*/
    float a, b, c, delta, x1, x2;
    printf("Enter a, b, c, of this expression: ax^2 + bx + c : "); //1,-8,12//1,-2,1//1,-5,8//
    scanf("%f %f %f", &a, &b, &c);
    if(a==0) {
        printf("'a' cannot be zero for quadratic equation.");
        return 0;
    }
    delta = b*b - 4*a*c;
    printf("Delta = %.2f\n", delta);
    if(delta>0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Two roots is: X1 = %.2f , X2 = %.2f\n", x1, x2);
    }else if(delta==0) {
        x1=x2 = -b / 2*a;
        printf("Double root is: X1 = X2 = %.2f\n", x1);
    }else{
        float real_part = -b / 2*a;
        float Imaginary_part = sqrt(-delta) / 2*a;
        printf("Complex roots:X1 = %.2f + %.2fi, X2 = %.2f - %.2fi\n", real_part, Imaginary_part, real_part, Imaginary_part);

    }
    int month;
    printf("Enter the number from 1 to 12 represent the month: ");
    scanf("%d", &month);
    switch(month) {        // we use switch to instead of writting many if else
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Cannot find. Please input 1 to 12 again. Thank you!.\n");
    }
    return 0;
}
