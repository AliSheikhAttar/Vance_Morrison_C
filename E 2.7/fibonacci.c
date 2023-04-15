#include <stdio.h>

int fibonacci(int N)
{
    int fibs[1000]={1,1};
    for(int i=2;i<N;i++)
    {
        fibs[i]=fibs[i-1]+fibs[i-2];
    }
    return fibs[N-1];
}

int fibonacci_numbers(int n)
{
    int fibs[1000]={1,1};
    for(int i=2;i<n;i++)
    {
        fibs[i]=fibs[i-1]+fibs[i-2];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",fibs[i]);
    }
    printf("%d.",fibs[n-1]);
}

int main()
{
    printf("%d\n",fibonacci(11));
    fibonacci_numbers(20);
}