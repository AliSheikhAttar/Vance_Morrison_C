#include <stdio.h>
int facltorial(int n)
{
    int m =1;
    for(int i=2;i<n+1;i++)
    {
        m = m*i;
    }
    return m;
}

int main()
{   
    int n;
    printf("enter a value for n: ");
    scanf("%d",&n);
    printf("the factorial of %d is : %d\n",n, facltorial(n));
    int z = 0;
    for(int k =0;k<n+1;k++)
    {
        z =  facltorial(k);
        printf("%d -----> %d\n",k,z); 
    }
}