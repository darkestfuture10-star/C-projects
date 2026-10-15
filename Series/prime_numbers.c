#include <stdio.h>
#include "header.h"

void primenumberSeries(int n)
{   
    for(int i=2; i<n; i++)
    {
        int a = 1;
        for(int j=2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                a = 0;
                break;
            }
        }
        if(a != 0)
        {
            printf("%d \n", i);
        }
    }
}
void primenumberChecker(int n)
{
    while(n < 1)
    {
        printf("Wrong input, try again\n");
        scanf("%d", &n);
    }
    if(n == 1)
    {
        printf("%d is not a prime number", n);
    }
    else if(n == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                printf("%d is not a prime number", n);
                break;
            }
            else
            {
                printf("%d is a prime number", n);
                break;
            }
        }
    }
}
void primeNumbers()
{
    printf("Pick one from below\n1. Prime number checker\n2. Prime number series\n");
    int a; scanf("%d", &a);
    while(a < 1 || a > 2)
    {
        printf("Wrong input, try again!!\n");
        scanf("%d", &a);
    }
    int n;
    if(a == 1)
    {
        printf("Enter your number: ");
        scanf("%d", &n);
        primenumberChecker(n);
        
    }
    else
    {
        printf("Enter how far you want to see the series: ");
        scanf("%d", &n);
        primenumberSeries(n);
        
    }
}
