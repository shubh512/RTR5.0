#include<stdio.h>

int main()
{
    int SBP_i;

    printf("\n");
    printf("Printing Even numbers from 0 to 100: \n");

    for(SBP_i = 0; SBP_i <= 100; SBP_i++)
    {
        if(SBP_i % 2 != 0)
        {
            continue;
        }
        else
        {
            printf("\t%d\n", SBP_i);
        }
    }
    printf("\n");
    return 0;
}