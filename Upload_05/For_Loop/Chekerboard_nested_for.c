#include<stdio.h>

int main()
{
    int SBP_i, SBP_j, SBP_c;
    printf("\n");
    for(SBP_i = 0; SBP_i < 64 ; SBP_i++)
    {
        for(SBP_j = 0; SBP_j < 64; SBP_j++)
        {
            SBP_c = ((SBP_i & 0x8) == 0) ^ ((SBP_j & 0x8) == 0);

            if(SBP_c == 0)
            {
                printf(" ");
            }
            if(SBP_c == 1)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}