#include<stdio.h>

int main()
{
    int SBP_i, SBP_j;

    printf("\n");
    printf("Printing digits 10 to 1 and 100 to 1: \n");

    for(SBP_i=10, SBP_j = 100; SBP_i >= 1, SBP_j >= 10; SBP_i--, SBP_j = SBP_j - 10)
    {
        printf("\t %d  \t %d\n", SBP_i, SBP_j);
    }

    printf("\n");

    return 0;
}