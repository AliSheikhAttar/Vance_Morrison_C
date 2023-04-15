#include <stdio.h>

int compute_sum(int n)
{
    int sum =0; 
    for(int i=0;i<n+1;i++)
    {
        sum = sum+i;
    }
    return sum;
}


int main()
{

    printf("N            compute_sum(N)\n");
    for(int i=9;i>0;i-=1)
    {
        printf("%d            %d\n",i,compute_sum(i));
    }

}