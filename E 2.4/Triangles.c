#include <stdio.h>

int print_right_triangle(int n)
{
    int a, b, c, d, e;
    for(a = 1; a <= n; a++)
    {
        for(e = 1; e <= n; e++)
        {
        printf(" ");
        }
        for(b = 1; b <= n-a; b++)
        {
        printf(" ");
        }
        for(c = 1; c <= a; c++)
        {
        printf("*");
        }
    printf("\n");
    }
    printf("\n");
}
   



int print_left_triangle(int n)
{
    int a, b, c, d;
    for(a = 1; a <= n; a++)
    {
        for(b = 1; b <= n; b++)
        {
        printf(" ");
        }
        for(c = 1; c <= a; c++)
        {
        printf("*");
        }
    printf("\n");
    }
    for(d = 0; d < n; d++)
    {
    printf("\"");
    }
    printf("\n");
}

int main()
{   
    print_left_triangle(6);
    print_right_triangle(6);
}