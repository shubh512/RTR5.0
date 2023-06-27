#include<stdio.h>
#include<stdlib.h>

int* arr(int);
int main()
{
    int num;
    int * ptr;
    printf("Enter number: ");
    scanf("%d", &num);

    
    ptr = arr(num);
    printf("%ld\n", &ptr);
    for(int i=0; i<num; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}

int * arr(int num)
{
    int* p;
    int x;
    p = (int *)  malloc(num * sizeof(int));
    for(int i=0; i<num; i++)
    {
        printf("Enter number: ");
        scanf("%d",&x);
        p[i] = x;
    }
    printf("%ld\n", &p);
    return p;
}