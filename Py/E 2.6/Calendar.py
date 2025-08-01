def print_month(n):
    if n==1:
        print("Janaury")
    if n==2: 
        print("february")
    if n==3:
        print("March")
    if n==4:
        print("April")
    if n==5:
        print("May")
    if n==6:
        print("June")   
    if n==7:
        print("July")   
    if n==8:
        print("August")
    if n==9: 
        print("September")
    if n==10:
        print("October")
    if n==11:
        print("November")
    if n==12:
        print("December")
print_month(3)


def print_month(n):
    if n==1:
        return(" |    Janaury    |")
    if n==2:  
        return(" |    february   |")
    if n==3:
        return(" |    March      |")
    if n==4:
        return(" |    April      |")
    if n==5:
        return(" |    May        |")
    if n==6:
        return(" |    June       |")   
    if n==7:
        return(" |    July       |")   
    if n==8:
        return(" |    August     |")
    if n==9: 
        return(" |    September  |")
    if n==10: 
        return("|    October    |")
    if n==11:
        return("|    November   |")
    if n==12:
        return("|    December   |")
print("__________________________")
print(" ")
print("|"+" "+"number"+" "+"|"+" "*5+"Month"+" "*5+"|")
print("--------------------------")
for i in range(1,13):
    print(f"|   {i}   {print_month(i)}")
    print("--------------------------")