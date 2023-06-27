#include<stdio.h>

int main()
{
    int SBP_i, SBP_j;
    printf("\n");

    printf("Outer loop prints odd numbers between 1 to 10\n");
    printf("Inner loop prints even number between 1 to 10 for every odd number printed by outer loop\n\n");
    for(SBP_i = 1; SBP_i<= 10; SBP_i++)
    {
        if( SBP_i % 2 != 0)
        {
            printf("SBP_i = %d\n", SBP_i);
            printf("-------------------\n");
            for(SBP_j = 1; SBP_j <= 10; SBP_j++)
            {
                if(SBP_j % 2 == 0)
                    printf("\tSBP_j = %d\n", SBP_j);
                else    
                    continue;
            }
            printf("\n");
        }
        else
            continue;
    }
    printf("\n");
    return 0;
}