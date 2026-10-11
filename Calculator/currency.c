#include<stdio.h>
#include "header.h"

//USD to BDT
float usdtoBDT(float n)
{
    return (123.19 * n);
}
//USD to Euro
float usdtoEuro(float n)
{
    return (0.8925 * n);
}
//USD to INR
float usdtoINR(float n)
{
    return(96.78 * n);
}
//USD to JPY
float usdtoJPY(float n)
{
    return(158.29 * n);
}

float currencyConverter()
{
    printf("Please enter a non negative value(in USD): ");
    float n; scanf("%f", &n);
    while(n <= 0)
    {
        printf("Incorrect input, please try again\n");
        scanf("%f", &n);
    }
    float sum1 = usdtoBDT(n);
    float sum2 = usdtoEuro(n);
    float sum3 = usdtoJPY(n);
    float sum4 = usdtoINR(n);


    printf("Bangladeshi Taka: %.2f bdt\n", sum1);
    printf("Euro: %.2f eur\n", sum2);
    printf("Japanese Yen: %.2f eur\n", sum3);
    printf("Indian Rupee: %.2f inr\n", sum4);
    return 0;
}