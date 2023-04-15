#include <stdio.h>

int print_left_triangle(int n)
{
    for(int i=1;i<n+1;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%s%s","%","");
            }
        }
        else
        {
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int print_cone(int n)
{
    if(n%2 ==0)
    {
        printf("the entered number should be odd.");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            printf(" ");
        }
        printf("^\n");
        int j=1;
        for(j;j<n+1;j+=1)
        {
            for(int l=0;l<n-j;l++)
            {
                printf(" ");
            }
            for(int k=0;k<j;k++)
            {
                printf("/");
            }
            printf("|");
            for(int c=0;c<j;c++)
            {
                printf("\\");
            }    
    
            printf("\n");
        }
 

    }   

}
int main()
{
    print_left_triangle(8);
    print_cone(9);
    for(int i=1;i<=10;i+=2)
    {
        print_cone(i);
    }
}