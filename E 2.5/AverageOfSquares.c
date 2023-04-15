#include <stdio.h>
#include <math.h>

int average_of_squares0(int n)
{
    int z = 0;
    int m =0;
    int x;
    for(int i = 0;i<n;i++)
    {
        m = pow(i,2);
        z = z +m;
    }
    x = z/n;
    return x;
}

int average_of_squares1(int n)
{
    int x, z, u = 0;
    for(int i =1;i<(n+1);i++)
    {
        u = pow(i,2);
        z +=u;
    }
    x = z/n;
    return x;
}

int main()
{
    int n;
    printf("enter a value: ");
    scanf("%d", &n);
    int x = pow(2,3);
    printf("from the first methodthe average of squares of whole numbers from 0 to %d is %d\n",n-1,average_of_squares0(n));
    printf("from the second methodthe average of squares of whole numbers from 0 to %d is %d\n",n-1,average_of_squares1(n));
    printf("-------conclusion--------");
    printf("we can clearlly see that the result for average_of_squares0(5)=%d is not equal to average_of_sqares1(4)=%d.", average_of_squares0(5), average_of_squares1(4));
    printf("because although the total of the squares are the same but the qauntity of the squares are different so the average wont be eqaul.\n");

    return 0;
}