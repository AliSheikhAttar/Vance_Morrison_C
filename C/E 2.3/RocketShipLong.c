#include <stdio.h>

int body()
{   
    /*this is for ragid body*/
    printf("+-------+\n");
    int i = 0;
    for(i=0;i<4;i++)
    {
        printf("+*******+\n");
    }
    printf("+-------+\n");
    for(i=0;i<4;i++)
    {
        printf("+*******+\n");
    }
    printf("+-------+\n");
}


int bottom()
{
    /*this is for power engine & its cone */
    printf(" ");                
    printf(" ");                
    printf(" ");                
    printf(" ");                
    printf("^\n");
    printf(" ");
    printf(" ");
    printf(" /|\\ \n");
    printf(" ");
    printf(" //|\\\\ \n");
    printf(" ");
    printf("///|\\\\\\ \n");
}


int main()
{
    bottom();
    body();
    bottom();
}