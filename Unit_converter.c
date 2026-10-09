// just a normal unit(length) conversions, inputs in (m) will show foot, inch, mile, yard.
#include<stdio.h>
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
    return 1.0936133 * n;
}

int main()
{
    float n;
    printf("Enter a positive number you want to see the conversions.\nMetre: ");    
    scanf("%f", &n);          
    float sum1 = mtoFoot(n);
    float sum2 = mtoInch(n);
    float sum3 = mtoMile(n);
    float sum4 = mtoYard(n);
    printf("Foot: %.2f\n", sum1);
    printf("Inch: %.2f\n", sum2); 
    printf("Mile: %.2f\n", sum3);
    printf("Yard: %.2f\n", sum4);//printing upto two decimals
    return 0;
}

/*
    0.1v just manually adding the conversions, next update will be about Input validation.
*/