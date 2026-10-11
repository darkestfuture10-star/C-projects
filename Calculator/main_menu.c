#include <stdio.h>
#include "header.h"

int main()
{
    printf("Welcome to the unit converter...\nBy EasyMade.\n\n\n");
    printf("Please pick a section from below:\n1. Length\n2. Mass\n3. Currency\n");
    int a; scanf("%d", &a);

    while(a <= 0 || a > 3)
    {
        printf("Invalid input, try again!\n");
        scanf("%d", &a);
    }
    if(a == 1)
    {
        unitConverter();
    }
    else if(a == 2)
    {
        massConverter();
    }
    else
    {
        currencyConverter();
    }

}