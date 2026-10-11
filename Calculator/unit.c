#include <stdio.h>
#include "header.h"
// Metre to foot
float mtoFoot(float n)
{
    return(3.28084 * n); 
}
//Metre to inch
float mtoInch(float n)
{
    return(39.37008 * n);
}
//Metre to mile
float mtoMile(float n)
{
    return(0.00062137121212121 * n);
}
//Metre to yard
float mtoYard(float n)
{
    return (1.0936133 * n);
}
float unitConverter()
{
    //length conversions
    float n;
    printf("Enter a positive length.\nMetre: ");    
    scanf("%f", &n);
    while(n < 0)
    {
        printf("Please enter a positive number.\n");  
        scanf("%f", &n);
    }
    float sum1 = mtoFoot(n);
    float sum2 = mtoInch(n);
    float sum3 = mtoMile(n);
    float sum4 = mtoYard(n);
    printf("Foot: %.2f ft\n", sum1);
    printf("Inch: %.2f in\n", sum2); 
    printf("Mile: %.2f mi\n", sum3);
    printf("Yard: %.2f yd\n", sum4);//printing upto two decimals

    return 0;

}