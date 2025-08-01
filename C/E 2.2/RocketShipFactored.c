#include <stdio.h>
int body()
{
    /*this is for ragid body*/
    printf("+-------+\n");
    printf("+*******+\n");
    printf("+*******+\n");
    printf("+*******+\n");
    printf("+*******+\n");
    printf("+-------+\n");
    printf("+*******+\n");
    printf("+*******+\n");
    printf("+*******+\n");
    printf("+*******+\n");
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

int main(int argc, char**argv)
{
    bottom();
    body();
    bottom();

}