#include <stdio.h>
#include "header.h"

float ctoFahrenheit(float x)
{
    float fahrenheit = (x * 9/5) + 32;
    return fahrenheit;
}
float ctoKelvin(float x)
{
    float kelvin = x + 273.15;
    return kelvin;
}
float tempConvert()
{
    printf("Enter the input(in C): ");
    float n; scanf("%f", &n);
    while(n < -273.15)
    {
        printf("Invalid input, please enter an input again.\n");
        scanf("%f", &n);
    }

    float sum1 = ctoFahrenheit(n);
    float sum2 = ctoKelvin(n);


    printf("Fahrenheit: %.2f F\n", sum1);
    printf("Kelvin: %.2f K\n", sum2);
}

