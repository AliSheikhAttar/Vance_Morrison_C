def days_in_month(monthNumber):
    months=["January","Fabrurary","March","April","May","June","July","August","September","October","November","December" ]
    numberss=[31,28,31,30,31,30,31,31,30,31,30,31]
    result=list(zip(months,numberss))
    print(f"{months[monthNumber-1]} has {result[monthNumber-1][1]} days. ")
days_in_month(2)

def is_leap_year(n):
    if (n%400==0) or (n%100 !=0) and (n % 4 ==0): 
        return True
    else :
        return False

def days_in_month2(month_Number):
    months=["January","Fabrurary","March","April","May","June","July","August","September","October","November","December" ]
    numberss=[31,28,31,30,31,30,31,31,30,31,30,31]
    result2=list(zip(months,numberss))
    return result2[month_Number-1][1]

def days_before_date(year,monthNumberr,dayNumber):
    y=(year-2014)*365
    m=0
    for i in range(1,monthNumberr):
        m=days_in_month2(i)+m
    x=y+m+dayNumber-1
    return x
print(days_before_date(2014,4,8))

week=["Monday","Tuesday","Wednesday", "Thursday","Friday","Saturday","Sunday"]
def day_of_the_week(yearrnumber,monthhnumber,dayynumber):   
    x=(days_before_date(yearrnumber,monthhnumber,dayynumber))%7
    if x>4:
        return week[x-5]
    else:
        return week[x+2]

print(day_of_the_week(2014,2,23))
def day_of_the_week2(g):
    x=g%7
    if x>4:
        return week[x-5]
    else:
        return week[x+2]
def sunday(x,y,z):
    j=0
    for i in range(days_before_date(x,y,z)):
        if day_of_the_week2(i)=="Sunday":
            j=j+1
    return j
print(sunday(2015,1,1))
