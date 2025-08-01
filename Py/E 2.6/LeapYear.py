def is_leap_year(n):
    if (n%400==0) or (n%100 !=0) and (n % 4 ==0): 
        print(True)
    else :
        print(False)
def test_is_leap_year():
    is_leap_year(1792)
    is_leap_year(1796)
    is_leap_year(1800)
    is_leap_year(1804)
    is_leap_year(1900)
    is_leap_year(1904)
    is_leap_year(2000)
    is_leap_year(2004)
test_is_leap_year()
