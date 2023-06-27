#include<stdio.h>

int main(void)
{
    int a;
    int b; 
    int result;

    printf("Enter A number: ");
    scanf("%d", &a);
    
    printf("\nEnter B number: ");
    scanf("%d", &b);

    result = a+b;
    printf("Addition of A = %d and B = %d gives result = %d\n", a, b, result);

    result = a-b;
    printf("Subtraction of A = %d and B = %d gives result = %d\n", a, b, result);

    result = a*b;
    printf("multiplication of A = %d and B = %d gives result = %d\n", a, b, result);

    result = a/b;
    printf("Division of A = %d and B = %d gives Quotient = %d\n", a, b, result);

    result = a%b;
    printf("Division of A = %d and B = %d gives Remainde = %d\n", a, b, result);

    return(0);
}