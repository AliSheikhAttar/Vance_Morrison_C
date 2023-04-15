#include <stdio.h>
int absolute_value(int x)
{
    if(x<0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}
int result()
{
    printf("%d\n",absolute_value(-100));
    printf("%d\n",absolute_value(-1));
    printf("%d\n", absolute_value(0));
    printf("%d\n", absolute_value(1));
    printf("%d\n", absolute_value(1000));
}
unsigned long long int factorial(int x)
{
    unsigned long long int m =1;
    for(int i =1;i<x+1;i++)
    {
        m =i*m;
    }
    return m;
}

int  factorial_table(int y)
{
    for(int j=0;j<y+1;j++)
    {
        printf("%d---->%llu\n",j,factorial(j));
    }
}
int main()
{
    result();
    factorial_table(20);
}