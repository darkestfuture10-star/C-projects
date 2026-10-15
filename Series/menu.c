#include <stdio.h>
#include "header.h"

int main()
{
    printf("Pick which series you want to look at.\n\n1. Even & Odd\n2. Fibonacci\n3. Prime Numbers\n");
    int a; scanf("%d", &a);
    while(a < 1 || a > 3)
    {
        printf("Wrong input try again\n");
        scanf("%d", &a);
    }
    if(a == 1)
    {
        evenodd();
    }
    else if(a == 2)
    {
        fibonacci();
    }
    else
    {
        primeNumbers();
    }
    return 0;
}