#include<stdio.h>

int main()
{
    int SBP_i, SBP_j;
    printf("\n");

    for(SBP_i = 1; SBP_i <= 20; SBP_i++)
    {
        for(SBP_j = 1; SBP_j <= 20; SBP_j++)
        {
            if(SBP_j > 1)
                break;
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}