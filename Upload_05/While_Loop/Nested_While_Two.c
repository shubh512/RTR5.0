#include<stdio.h>

int main()
{
    int SBP_i, SBP_j, SBP_k;
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
            printf("-----------------------\n");
            SBP_k = 1;
            while(SBP_k <= 3)
            {
                printf("\t\tSBP_k = %d\n", SBP_k);
                SBP_k++;
            }
            printf("\n");
            SBP_j++;
        }
        SBP_i++;
        printf("\n");
    }
    return 0;
}