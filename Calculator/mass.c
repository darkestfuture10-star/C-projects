#include <stdio.h>
#include "header.h"
//Kilogram to Pound
float kgtoPound(float n)
{
    return (2.20462 * n);
}
//Kilogram to Ounce
float kgtoOunce(float n)
{
    return (35.274 * n);
}
//Kilogram to Stone
float kgtoStone(float n)
{
    return (0.157473 * n);
}

float massConverter()
{
    //mass conversions
        float n;
        printf("Please enter a positive weight(kg).\n");  
        scanf("%f", &n);
        while(n < 0)
        {
            printf("Please enter a positive number.\nKilogram: ");  
            scanf("%f", &n);
        }
        float sum1 = kgtoPound(n);
        float sum2 = kgtoOunce(n);
        float sum3 = kgtoStone(n);
        printf("Pound: %.2f lb\n", sum1);
        printf("Ounce: %.2f oz\n", sum2);
        printf("Stone: %.2f st\n", sum3);

    return 0;
}