#include<stdio.h>

int main()
{
    int SBP_i, SBP_j;
    printf("\n");
    for(SBP_i = 1; SBP_i<= 10; SBP_i++)
    {
        printf("SBP_i = %d\n", SBP_i);
        printf("-------------------\n");
        for(SBP_j = 1; SBP_j <= 5; SBP_j++)
        {
            printf("\tSBP_j = %d\n", SBP_j);
        }
        printf("\n");
    }
    return 0;
}