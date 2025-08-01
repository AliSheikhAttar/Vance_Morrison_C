#include <stdio.h>
int main()
{
    for(int i=1;i<100;i++)
    {
        for(int j=1;j<100;j++)
        {
            for(int k=1;k<100;k++)
            {
                if(i<j && j<k && i*i +j*j == k*k )
                {
                    printf("i= %d j= %d k= %d \n",i, j, k);
                    
                }
            }
        
        }
        
    }
}
