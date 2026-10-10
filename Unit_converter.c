// just a normal unit conversions (length & Weight)
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
    return (1.0936133 * n);
}
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
int main()
{
    //main menu
    printf("Unit Convertor\nBy Easymade\n\n\n");
    printf("Choose a catagory from down below\n1. Length\n2. Weight\n");
    int a; scanf("%d", &a);

    if(a == 1)
    {
    //length convertor
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
    }
    else if(a == 2)
    {
        //Weight convertor
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
    }
    
    return 0;
}

/*
    0.2v just manually adding the conversions,a simple main menu, added weight convesions.
*/