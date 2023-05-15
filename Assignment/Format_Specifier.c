#include<stdio.h>

int main(void)
{
    printf("\n\n");
    printf("*************************************************************");
    printf("\n\n");

    printf("Hello World !!!\n\n");

    int a = 13;
    printf("Integer Decimal Value of 'a' = %d\n", a);
    printf("Integer Octal value of 'a' = %o\n", a);
    printf("Integer Hexadecimal value of 'a' = %x\n", a);
    printf("Integer Hexadecimal value of 'a' = %X\n", a);

    printf("\n");

    char ch = 'A';
    printf("Character ch = %c\n", ch);
    char str[] = "Astromedicomp's Real Time Rendering Batch";
    printf("String str = %s\n\n", str);

    long num = 123456789;
    printf("Long Integer = %ld\n\n", num);

    unsigned int b = 7;
    printf("Unsigned int 'b' = %d", b);

    float f_num = 3012.12345f;
    printf("Floating point number with Just %%f 'f_num' = %f\n", f_num);
    printf("Floating point number with Just %%4.2f 'f_num' = %4.2f\n", f_num);
    printf("Floating point number with Just %%6.5f f_num' = %6.5f\n\n", f_num);

    double d_pi = 3.14159265358979323846;
    printf("Double precision floating point number without Exponential = %g\n", d_pi);
    printf("Double precision floating point number without Exponential = %e\n", d_pi);
    printf("Double precision floating point number without Exponential = %E\n", d_pi);
    printf("Double Hexadecimal Value of 'd_pi' = %a\n", d_pi);
    printf("Double Hexadecimal Value of 'd_pi' = %A\n\n", d_pi);

    printf("*************************************************************");
    printf("\n\n");

    return(0);
}