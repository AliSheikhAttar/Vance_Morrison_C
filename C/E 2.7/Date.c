#include <stdio.h>
#include <stdbool.h>
char days_in_month(int monthNumber)
{
    char months[12][15] = {"January","Fabrurary","March","April","May","June","July","August","September","October","November","December"};
    int numbers[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("%s has %d days.\n",months[monthNumber-1],numbers[monthNumber-1]);
}
int is_leep_year(int n)
{
    if((n%400==0) || ((n%100!=0) && (n%4==0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char days_in_month2(int monthNumber)
{
    char months[12][15] = {"January","Fabrurary","March","April","May","June","July","August","September","October","November","December"};
    int numbers[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    return months[monthNumber-1], numbers[monthNumber-1];
}

int days_before_date(int year, int monthnumberr,int daynumber)
{
    int y = (year-2014)*365;
    int m =0;
    for(int i =1;i<monthnumberr;i++)
    {
        m = days_in_month2(i)+m;
    }
    int x = y+m +daynumber-1;
    return x;
}

int days_of_the_week(int yearrnumber,int monthhnumber,int dayynumber)
{
    char week[7] = {"Monday","Tuesday","Wednesday", "Thursday","Friday","Saturday","Sunday"};
    int x = (days_before_date(yearrnumber,monthhnumber,dayynumber))%7;
    if(x>4)
    {
        return week[x-5];
    }
    else
    {
        return week[x+2];
    }

}

int main()
{
    days_in_month(5);
    printf("%d",days_before_date(2014,4,8));
    printf("%c",days_of_the_week(2014,2,23));
}
