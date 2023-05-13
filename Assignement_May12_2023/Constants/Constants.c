#include <stdio.h>
#define MY_PI 3.1415926535897932
#define AMC_STRING "AstroMediComp RTR"
//If First Constant is Not Assigned A Value, It is Assumed To Be 0 i.e: 'SUNDAY' Will Be
//And The Rest Of The Constants Are Assigned Consecutive Integer Values From > onwards i.e: 'MONDAY' Will Be 1, 'TUESDAY' Will Be 2, and so on...
// Un-named enums
enum
{
SUNDAY,
MONDAY,
TUESDAY,
WEDNESDAY,
THURSDAY,
FRIDAY, 
SATURDAY,
};

enum
{
JANUARY = 1,
FEBRUARY,
MARCH,
APRIL,
MAY,
JUNE,
JULY,
AUGUST,
SEPTEMBER,
OCTOBER,
NOVEMBER,
DECEMBER
};

enum
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE = 5,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN
};

enum boolean
{
    TRUE = 1,
    FALSE = 0  
};

int main(void)
{
    const double epsilon = 0.000001;

    printf("\n\n");
    printf("Local Constant Epsilon = %lf\n\n", epsilon);

    printf("Sunday is Day number = %d\n", SUNDAY);
    printf("Monday is Day Number = %d\n", MONDAY);
    printf("Tuesday is Day Number = %d\n", TUESDAY);
    printf("Wednesday is day Number = %d\n,", WEDNESDAY);
    printf("Thursday is Day Number = %d\n", THURSDAY);
    printf("Friday is Day Number = %d\n", FRIDAY);
    printf("Saturday is Day Number = %d\n\n", SATURDAY);




    printf("One is Enum number = %d\n", ONE);
    printf("Two is Enum number = %d\n", TWO); 
    printf("Three is Enum number = %d\n", THREE); 
    printf("Four is Enum number = %d\n", FOUR); 
    printf("Five is Enum number = %d\n", FIVE); 
    printf("Six is Enum Number = %d\n", SIX);
    printf("Seven is Enum Number = %d\n", SEVEN); 
    printf("Eight is Enum Number = %d\n", EIGHT); 
    printf("Nine is Enum Number = %d\n", NINE); 
    printf("Ten is Enum Number = %d\n\n", TEN);
    printf("January is Month Number = %d\n", JANUARY); 
    printf("February is Month Number = %d\n", FEBRUARY); 
    printf("March is Month Number = %d\n", MARCH); 
    printf("April is Month Number = %d\n", APRIL);
    printf("May is Month number = %d\n", MAY); 
    printf("June is Month number = %d\n", JUNE); 
    printf("July is Month number = %d\n", JULY);
    printf("August is Month number = %d\n", AUGUST); 
    printf("September is Month number = %d\n", SEPTEMBER); 
    printf("October is Month Number = %d\n", OCTOBER);
    printf("November is Month Number = %d\n", NOVEMBER);
    printf("December is Month Number = %d\n\n", DECEMBER);
    printf("Value Of TRUE is = %d\n", TRUE); 
    printf("Value Of FALSE is = %d\n\n", FALSE);
    printf("MY_PI Macro value = %.101f\n\n", MY_PI);
    printf("Area Of Circle Of Radius 2 units = %f\n\n", (MY_PI * 2.0f * 2.0f)); //pi* r * r = area of circle of radius 'r'

    printf("\n\n");

    printf(AMC_STRING);
    printf("\n\n");
    printf("AMC_STRING is : %s\n", AMC_STRING);
    printf("\n\n");
}