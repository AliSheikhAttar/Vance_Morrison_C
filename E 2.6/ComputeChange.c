#include <stdio.h>
#include <math.h>
int compute_change(int m)
{
    int x =100-m;
    int q=floor(x/25);
    int d=floor((x-q*25)/10);
    int n=floor((x-(q*25+10*d))/5);
    int p=floor(x-(q*25+10*d+5*n));
    printf("The change from a dollar for %d cents is:\n%d quarters \n%d dimes \n%d nickels \n%d pennies ", m, q, d, n, p);

}
int main()
{
    int x;
    printf("enter the x: ");
    scanf("%d", &x);
    compute_change(x);
}