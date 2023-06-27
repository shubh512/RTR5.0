#include<stdio.h>

int main(void)
{
    char SBP_option, SBP_ch = '\0';

    printf("\n");
    printf("Once the infinite loop Begins, enter 'Q' or 'q' to quit the infinite for loop: \n");
    printf("Enter 'Y' or 'y' to initiate user controlled infinite loop: ");
    printf("\n");

    SBP_option = getch();

    if(SBP_option == 'Y' || SBP_option == 'y')
    {
        for(;;)
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
    printf("EXITING USER CONTROLLED INFINTE FOR LOOP ...");
    printf("\n");
    
    return 0;
}
