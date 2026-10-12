#include <stdio.h>
#include "header.h"

int main()
{
    printf("Welcome to a simple conversation calculator...\nBy EasyMade.\n\n\n");
    printf("Please pick a section from below:\n1. Length\n2. Mass\n3. Currency\n4. Temperature\n5. Quadratic Equation roots\n");
    int a; scanf("%d", &a);

    while(a <= 0 || a > 5)
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
    else if(a == 3)
    {
        currencyConverter();
    }
    else if(a == 4)
    {
        tempConvert();
       
    }
    else
    {
        quadEQ();
    }

}