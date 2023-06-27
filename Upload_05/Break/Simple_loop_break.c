#include<stdio.h>
#include<conio.h>

int main(void)
{
    int SBP_i;
    char SBP_ch;

    printf("\n");
    printf("Printing even numbers from 1 to 100 for evry user input. Exiting loop upon receiving 'Q' or 'q'. \n");
    printf("Enter 'Q' or 'q' to exit loop. \n ");
    printf("\n");

    for(SBP_i = 1;SBP_i <= 100; SBP_i++)
    {
        printf("\t%d\n", SBP_i);
        SBP_ch = getch();
        if(SBP_ch == 'Q' || SBP_ch == 'q')
        {
            break;
        }
    }


    printf("\n");
    printf("EXITING LOOP ...");
    printf("\n");
    
    return 0;
}
