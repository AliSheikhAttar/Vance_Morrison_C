n=int(input("enter the n: "))
x=100-n
def compute_change(n):
    q=int(x/25)
    d=int((x-q*25)/10)
    n=int((x-(q*25+10*d))/5)
    p=int(x-(q*25+10*d+5*n))
    print(f"The change from a dollar for 8 cents is:\n{q} quarters \n{d} dimes \n{n} nickels \n{p} pennies ")
compute_change(n)