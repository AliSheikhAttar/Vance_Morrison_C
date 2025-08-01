#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
bool is_divisible(int a,int b)
{
    if(a%b==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_prime(int N)
{
    assert(floor(N)==N);       //precondition
    assert(2<=N);             //precondition
    if(N==2)
    {
        return true;
    }
    for(int x=2;x<N;x++)
    {
        if(is_divisible(N,x))
        {
            return false;
        }    
        else
        {
        return true;
        }
    }
}
int main()
{
    printf(is_prime(19) ? "true\n" : "false\n");
    printf(is_divisible(2,3) ? "true\n" : "false\n");
}