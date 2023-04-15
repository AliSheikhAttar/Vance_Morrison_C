#include <stdio.h>
float main()
{
    float c;
    printf("enter the temperature in centigerade: ");
    scanf("%f",&c);
    float f = c*9/5 +32;
    printf("the temperature is %0.2f centigerade & %0.2f in fahrenheit.\n",c ,f);
}
