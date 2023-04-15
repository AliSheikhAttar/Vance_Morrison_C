#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <math.h>
double eulers_constant(long double precise1)
{
    double n =0.00;
    double z=1.0;
    double m=1.0;
    while((1/m)>precise1)
    {
        n =n+1;
        m=(n*m);
        z+=(1/m);
    }
    return z;
}
double power(long double x, int y)
{
    double m=1;
    if(y>=0)
    {
        for(int i=0;i<y;i++)
        {
            m *=x;
        }
        return m;
    }
    else{
        printf("error");
    }
}
long long int factorial(int n)
{
    long long int j =1;
    for(int i=2;i<n+1;i++)
    {
        j = j*i;
    }
    return j;
}

double Exp(int x, long double precision2)
{
    int m =1; 
    double n =0;
    double j=1;
    while(j>precision2)
    {
        j =(power(x,(m-1)))/factorial(m-1);
        n +=j;
        m+=1;
    }

    return n;
}
double Exp2(int x, long double precision3)
{
    double m =1; 
    double n =1;
    double j=1;
    double z=1;
    while(z>precision3)
    {
        z=m*x/n;
        j +=z;
        m=z;
        n=n+1;
    }
    return j;
}

double Abbs(long double x)        //the name "abs" wasnt accaptable because it was a primary default thing.
{
    if(x>=0)
    {
        return x;
    }
    else
    {
        return -x;
    }
}           

bool near(double x, double y, double closeness)
{
    double z =(Abbs(Abbs(x)-Abbs(y))/1000);
    if (z<closeness)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int test_computing()
{
    assert(near((Exp(1,0.0001)),(Exp2(1,0.0001)),0.001));
    assert(near((Exp(2,0.000001)),(Exp2(2,0.000001)),0.001));
    assert(near((Exp(7,0.00000000001)),(Exp2(7,0.00000000001)),0.001));
}

double Sin(long double x, long double precision)
{
    double m=1;
    double n=0;
    double j=1;
    while(Abbs((j))>precision)
    {
        double z = power((-1),(((m+1)/2)+1));
        double u = ((power(x,m))/factorial(m));
        j = u*z;
        n +=j;
        m+=2;

    }
    return n;

}

double square_root(double x,long double precision, double list[])
{
    double lowerband = 0;
    double mid=0;
    double upperband = x+1;
    lowerband<x<upperband;
    double n =0;
    while((upperband-lowerband) > precision)
    {
        mid = (upperband+lowerband)/2;
        if(power(mid,2)<x)
        {
            lowerband =mid;
        }
        else
        {
            upperband =mid;
        }
        n+=1;

    }
    list[0]= mid;
    list[1]=n;

}
double root(double x,int m, long double precision, double list[])
{
    double lowerband = 0.0;
    double mid=0;
    double upperband = x+1.0;
    lowerband<x<upperband;
    int n =0;
    while((upperband-lowerband) > precision)
    {
        mid = (upperband+lowerband)/2;
        if(power(mid,m)<x)
        {
            lowerband =mid;
        }
        else
        {
            upperband =mid;
        }
        n+=1;

    }
    list[0]= mid;
    list[1]=n;
    return mid;

}
double ln(long double x, long double precision4)
{
    double lowerband = 0.0;
    double mid=0;
    double upperband = x+1.0;
    lowerband<x<upperband;
    int n =0;
    while((upperband-lowerband) > precision4)
    {
        mid = (upperband+lowerband)/2;
        if(Exp2(mid,precision4)<x)
        {
            lowerband =mid;
        }
        else
        {
            upperband =mid;
        }
        n+=1;

    }
    return mid;

}

int main()
{
    printf("%0.15Lf\n",eulers_constant(0.00000000000000000000001));
    printf("%0.16Lf\n",Exp(1,0.000001));
    printf("%0.16Lf\n",Exp(2,0.000001));
    printf("%0.16Lf\n",Exp2(1,0.000001));
    printf("%0.16Lf\n",Exp2(2,0.000001));
    printf("%.10Lf\n",Sin(0.785398,0.00000001));
    printf("%.10lf\n",Sin(1.5707,0.00000001));
    printf("%.10Lf\n",Sin(0,0.00000001));
    test_computing();
    double result[2];
    double result_root[2];
    square_root(2,.000001,result);
    printf("the result:%0.4Lf   the iteration: %0.0Lf\n",result[0],result[1]);
    root(27.9,3,.000001,result_root);
    printf("the result:%0.4Lf   the iteration: %0.0Lf\n",result_root[0],result_root[1]);
    printf("%0.10Lf\n",ln(Exp2(1,0.00000001),0.0000000000001));
    printf("ln(%0.10Lf)  =  %0.10Lf\n",Exp2(1,0.00000001),ln(Exp2(1,0.00000001),0.00000000000001));
    printf("ln(%0.10Lf)  =  %0.10Lf\n",Exp2(5,0.000000001),ln(Exp2(5,0.00000001),0.00000000000001));
}