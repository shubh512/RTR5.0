#include<stdio.h>

int main()
{
    int SBP_i, SBP_j;
    printf("\n");
    SBP_i = 1;
    while(SBP_i <= 10)
    {
        printf("SBP_i == %d\n", SBP_i);
        printf("------------------\n");

        SBP_j = 1;
        while(SBP_j <= 5)
        {
            printf("\tSBP_j = %d\n", SBP_j);
            SBP_j++;
        }
        SBP_i++;
        printf("\n");
    }
    return 0;
}