#include<stdio.h>

int main()
{
    int i,j;
    char ch_01, ch_02;

    int a, result_int;
    float f, result_float;

    int i_explicit;
    float f_explicit;

    printf("\n\n");
    i = 70;
    ch_01 = i;
    printf("I = %d\n", i);
    printf("Character 1 (after ch_01 = i) = %x\n\n", ch_01);

    ch_02 = 'Q';
    j = ch_02;
    printf("Character 2 = %c\n", ch_02);
    printf("J (after j=ch_02) = %d\n\n", j);
    
    a =5;
    f = 7.8f;
    result_float = a + f;
    printf("Integer a = %d and Floating-Point Number %f Added gives Floating point Sum = %f\n\n", a,f,result_float);

    result_int = a + f;
    printf("Interger a = %d and Floating-Point Number %f added gives integer sum = %d\n\n", a,f,result_int);

    f_explicit = 30.121995f;
    i_explicit = (int)f_explicit;

    printf("Floating point number which will be typecasted explicitly = %f\n", f_explicit);
    printf("Resultant Integer After explicit typecasting of %f = %d\n\n", f_explicit, i_explicit);

    return(0);
}