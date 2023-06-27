#include<stdio.h>

int main(void)
{
    char SBP_option, SBP_ch = '\0';

    printf("\n");
    printf("Once the infinite loop Begins, enter 'Q' or 'q' to quit the infinite  loop: \n");
    printf("Enter 'Y' or 'y' to initiate user controlled infinite loop: ");
    printf("\n");

    SBP_option = getch();

    if(SBP_option == 'Y' || SBP_option == 'y')
    {
        while(1)
        {
            printf("In loop ...\n");
            SBP_ch = getch();
            if(SBP_ch == 'Q' || SBP_ch == 'q')
            {
                break;
            }
        }
    }

    printf("\n");
    printf("EXITING USER CONTROLLED INFINTE LOOP ...");
    printf("\n");
    
    return 0;
}
