#include <stdio.h>
#include <math.h>

int max(int list1[])
{
    int maxx =list1[0];
    for(int i =0;list1[i]!=0;i++)
    {
        if(list1[i]>=maxx)
        {
            maxx=list1[i];
        }
    }
    return maxx;
}

int min(int list1[])
{
    int minn =list1[0];
    for(int i =0;list1[i]!=0;i++)
    {
        if(list1[i]<=minn)
        {
            minn=list1[i];
        }
    }
    return minn;
}

int func()
{
    int y=0;
    float j=0;
    int n=0;
    int a[100];
    float x;
    printf("enter a number: ");
    scanf("%f",&x);
    while(x!=-1)
    {
        a[n]=x;
        n =n+1;
        printf("enter a number: ");
        scanf("%f",&x);
    }
    a[n]=0;
    for(int i=0;a[i]!=0;i++)
    {
        j +=a[i];
    }
    float avg = (j/n);
    
    printf("the number of entries is %d\n",n);
    printf("the average is %0.2f\n",avg);
    printf("the minimum is %d\n",min(a));
    printf("the maximum is %d\n",max(a));
}


int main()
{

    func();
}