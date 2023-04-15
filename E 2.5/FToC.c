#include <stdio.h>
float main()
{
    float F, C;
    printf("enter the temperature in Farenheit :");
    scanf("%f",&F);
    C = (F-32.0000)*5/9;
    printf("Temperature in Farenheit is %.2f & in Celsius is %.2f .\n",F, C);
}