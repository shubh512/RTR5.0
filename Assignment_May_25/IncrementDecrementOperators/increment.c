#include<stdio.h>

int main()
{
    int a =5, b =10;

    printf("A = %d\n", a);
    printf("A = %d\n", a++);
    printf("A = %d\n", a);
    printf("A = %d\n", ++a);

    printf("\nB = %d\n", b);
    printf("B = %d\n", b--);
    printf("B = %d\n", b);
    printf("B = %d\n", --b);

    return 0;
}