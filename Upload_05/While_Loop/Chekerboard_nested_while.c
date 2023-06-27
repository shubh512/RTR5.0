#include<stdio.h>

int main()
{
    int SBP_i, SBP_j, SBP_c;
    printf("\n");

    SBP_i = 0;
    while( SBP_i < 64 )
    {
        SBP_j = 0;
        while( SBP_j < 64)
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
            SBP_j++;
        }
        printf("\n");
        SBP_i++;
    }
    return 0;
}