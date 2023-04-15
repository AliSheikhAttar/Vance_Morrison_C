#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>
int is_divisible(int a, int b)
{
    if(a%b==0)
    {
        return true;
    }
    return false;
}

bool is_prime(int N)
{
    if(N==2)
    {
        return true;
    }
    for(int x=2;x<=sqrt(N);x++)
    {
        if(is_divisible(N,x))
        {
            return false;
        }

    }
    return true;
}

int primenumbers(int x)
{
    int numbers[1000];
    int count =0;
    for(int j=2;j<x;j++)
    {
        if(is_prime(j))
        {
            numbers[count]= j;
            count++;
        }
        numbers[count] = 0;
        
    }
    int i=0;
    for(i=1;numbers[i]!=0;i++)
    {
        printf("%d, ",numbers[i-1]);
    }
    printf("%d.\n", numbers[i-1]);

}


int main()
{
    printf(is_prime(1332) ? "true\n" : "false\n");
    primenumbers(20);
    assert(is_divisible(6,2));
}
