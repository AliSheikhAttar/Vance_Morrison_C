#include <stdio.h>
#include <math.h>

const char* myName() 
{   
    char *error = "Error";
    return error;
}
int power(int x, int y)


{
    

    char er[6] = "error";
    int h;
    if(y >=0)
    {
        h = pow(x,y);
    }
    else
    {
      printf("%s",myName());
    }
    if(y>0)
    {
        return h;
    }
}

int main()
{
    int x, y;
    printf("enter the x: ");
    scanf("%d",&x);
    printf("enter the y: ");
    scanf("%d",&y);
    printf("%d", power(x,y));
}
