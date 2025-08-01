#include <stdio.h>
#include <stdbool.h>
int is_leap_year(int n)
{
    if(n%400==0 || n%100 !=0 && n%4 ==0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}
int test_leap_year()
{
    is_leap_year(1792);
    is_leap_year(1796);
    is_leap_year(1800);
    is_leap_year(1804);
    is_leap_year(1900);
    is_leap_year(1904);
    is_leap_year(2000);
    is_leap_year(2004); 
}
int main()
{
    test_leap_year();
}
// the result should be like this due to official Calendar:
// true
// true
// false
// true
// false
// true
// true
// true
