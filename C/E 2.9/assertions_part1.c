#include <stdio.h>
#include <assert.h>
int factorial(int n)
{
    assert(n>0);             //precondition
    int m = 1;
    for(int i=2;i<n+1;i++)
    {
        assert(0<m);       //Loop Invariant
        m = m * i;
    }
    assert(0 < m) ;         //post-condition
    return m;
}
int main()
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    printf("%d",factorial(n));
}