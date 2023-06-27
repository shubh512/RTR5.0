#include<stdio.h>

int main()
{
    void PrintBinaryFormofNumber(unsigned int);

    unsigned int a, num_bits, result;

    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u", &a);

    printf("\n\n");
    printf("Enter by how many bits you want to shift A = %d to the right?", a);
    scanf("%u", &num_bits);

    printf("\n\n\n\n");
    result = a >> num_bits;
    printf("Bitwise Right_Shifting of \nA = %d (Decimal) by %d (bits) gives result = %d (Decimal).\n\n", a, num_bits, result);

    PrintBinaryFormofNumber(a);
    PrintBinaryFormofNumber(result);

    return 0;
}


void PrintBinaryFormofNumber(unsigned int decimal_number)
{
    unsigned int quotient, remainder;
    unsigned int num;
    unsigned int binary_array[8];
    int i;

    for(i = 0; i<8; i++)
    {
        binary_array[i] = 0;
    }

    printf("The binary form of the decimal integer %d is\t = \t", decimal_number);
    num = decimal_number;
    i = 7;
    while(num != 0)
    {
        quotient = num/2;
        remainder = num % 2;
        binary_array[i] = remainder;
        num = quotient;
        i--;
    }

    for(i=0; i<8; i++)
    {
        printf("%u", binary_array[i]);
    }
    printf("\n\n");
}