#include<stdio.h>

int main(void)
{
    int a,b,x;

    printf("Enter A number: ");
    scanf("%d", &a);

    printf("\nEnter Another number: ");
    scanf("%d", &b);

    x = a;
    a += b;
    printf("Addition of A = %d and B = %d gives result %d.\n", x, b, a);

    x = a;
    a -= b;
    printf("Subtraction of A = %d and B = %d gives result %d.\n", x, b, a);  

    x = a;
    a *= b;
    printf("Multiplication of A = %d and B = %d gives result %d.\n", x, b, a);

    x =a;
    a /= b;
    printf("Division of A = %d and B = %d gives Quotient %d.\n", x, b, a);

    x = a;
    a %= b;
    printf("Division of A = %d and B = %d gives Remainder %d.\n", x, b, a);

}