#include <stdio.h>
int print_month(int n)
{
    char months[12][13]={"Janaury", "february", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s\n",months[n-1]);
}
int print_month_table()
{
    char months_for_table[12][50]={"|  1  |   Janaury  |", "|  2  |  february  |", "|  3  |    March   |", "|  4  |   April    |", "|  5  |     May    |", "|  6  |    June    |", "|  7  |    July    |", "|  8  |   August   |", "|  9  |  September |", "| 10  |   October  |", "| 11  |  November  |", "| 12  |  December  |"};   
    printf("____________________\n");
    printf("|  n  |   month    |\n");
    printf("--------------------\n");
    for(int i =0;i<12;i++)
    {
        printf("%s\n",months_for_table[i]);
        printf("--------------------\n");
    }
}
int main()
{
    print_month(2);
    print_month_table();
}