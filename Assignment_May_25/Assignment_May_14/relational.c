#include<stdio.h>

int main()
{
    int a, b, result;
    printf("Enter one integer: ");
    scanf("%d", &a);
    printf("Enter one integer: ");
    scanf("%d", &b);

    printf("\nIf answer = 0, It is 'FALSE'");
    printf("\nIf answer = 1, It is 'TRUE'\n");

    result = a<b;
    printf("(a<b) A = %d is Less than B = %d                     \t Answer = %d\n", a, b, result);

    result = a>b;
    printf("(a>b) A = %d is Greater than B = %d                  \t Answer = %d\n", a, b, result);

    result = a<=b;
    printf("(a<=b) A = %d is Less than Or Eqaul to B = %d        \t Answer = %d\n", a, b, result);

    result = a>=b;
    printf("(a>=b) A = %d is Greater than Or Equal to B = %d     \t Answer = %d\n", a, b, result);
    
    result = a==b; 
    printf("(a==b) A = %d is equal to B = %d                     \t Answer = %d\n", a, b, result);
    
    result = a!=b;
    printf("(a!=b) A = %d is not equal to B = %d                 \t Answer = %d\n", a, b, result);

    return 0;
}