#include<stdio.h>

int main()
{
    int SBP_i_num, SBP_num, SBP_i;
    printf("\n");
    printf("Enter an Integer value from which iteration must begin: ");
    scanf("%d", &SBP_i_num);

    printf("How many digits do you want to print from %d Onwards? : ", SBP_i_num);
    scanf("%d", &SBP_num);

    printf("Printing digits%d to %d: \n\n", SBP_i_num, (SBP_i_num + SBP_num));

    for(SBP_i = SBP_i_num; SBP_i<= (SBP_i_num + SBP_num); SBP_i++)
    {
        printf("\t%d\n", SBP_i);
    }

    printf("\n");
    return 0;
}