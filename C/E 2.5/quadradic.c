#include <stdio.h>
#include <math.h>

float main()
{
    float A, B, C, x1, x2;
    printf("enter the A: ");
    scanf("%f", &A);
    printf("enter the B: ");
    scanf("%f", &B);
    printf("enter the C: ");
    scanf("%f", &C);
    x1 = (-B+pow((pow(B,2)-4*A*C),0.5))/(2*A);
    x2 = (-B-pow((pow(B,2)-4*A*C),0.5))/(2*A);
    printf("X1 is %.3f & X2 is %.3f .\n",x1, x2);

}
