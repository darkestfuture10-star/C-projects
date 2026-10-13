#include <stdio.h>
#include "header.h"

void evenoddChecker(int a)
{   
    if(a % 2 == 0)
    {
        printf("%d is an even number.\n", a);
    }
    else
    {
        printf("%d is an odd number.\n", a);
    }
}
void evenSeries(int a)
{
    for(int i = 2; i <= a; i+= 2)
    {
        printf("\n%d", i);
    }
}
void oddSeries(int a)
{
    for(int i = 1; i <= a; i+= 2)
    {
        printf("\n%d", i);
    }
}


void evenodd()
{
    printf("Pick an option from below.\n1. Even & Odd checker\n2. Even & odd series\n");
    int n; scanf("%d", &n);
    if(n == 1)
    {
        printf("Enter the number you want to check: ");
        int n; scanf("%d", &n);
        evenoddChecker(n);
    }
    else
    {   
        int a;
        printf("1. Even\n2. Odd\n");
        scanf("%d", &a);
        if(a == 1)
        {
            printf("Enter how far you want to see the series: ");
            int n; scanf("%d", &n);
            printf("Even\n");
            evenSeries(n);
        }else
        {
            printf("Enter how far you want to see the series: ");
            int n; scanf("%d", &n);
            printf("Odd\n");
            oddSeries(n);
        }   
    }
}