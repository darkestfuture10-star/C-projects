#include <stdio.h>
#include "header.h"

void fibonacci()
{     
    printf("Enter how far you want to see the series: ");
    int n; scanf("%d", &n);
    int a, b, c;
    for(a = 0; a < n; a++)
    {
        printf("%d\n", a);
        
        c = a + b;
        a = b;
        b = c;
    }
}
