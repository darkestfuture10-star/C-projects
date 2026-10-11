#include <stdio.h>
#include <math.h>
#include "header.h"

float determinar(float a, float b, float c)
{
    return (pow(b, 2) - 4*a*c);
}
float quadEQ()
{
    printf("Enter coefficients of the quadratic equation(a, b, c) below: \n");
    float a; scanf("%f", &a);
    float b; scanf("%f", &b);
    float c; scanf("%f", &c);

    float discriminant = determinar(a, b, c);
    float dit = sqrt(determinar(a, b, c));

    if (discriminant == 0)
    {
        float x = -b / (2 * a);
        printf("The roots are equal and it is %.2f.", x);
    }
    else if (discriminant < 0)
    {
        printf("The roots are not real numbers because the discriminant is less than zero.");
    }
    else
    {
        float x = (-b + dit) / (2 * a);
        float y = (-b - dit) / (2 * a);
        printf("The roots of the quadratic equation are x = %.2f and y = %.2f.", x, y);
    }
}