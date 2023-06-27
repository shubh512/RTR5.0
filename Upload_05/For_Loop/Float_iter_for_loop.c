#include<stdio.h>

int main()
{
    float SBP_f;
    float SBP_f_num = 1.7f;

    printf("\n");
    printf("Printing numbers %f to %f: \n", SBP_f_num, (SBP_f_num * 10.0));

    for(SBP_f = SBP_f_num; SBP_f <= (SBP_f_num * 10.0f); SBP_f = SBP_f + SBP_f_num)
    {
        printf("\t%f\n", SBP_f);
    }

    printf("\n");
    
    return 0;
}