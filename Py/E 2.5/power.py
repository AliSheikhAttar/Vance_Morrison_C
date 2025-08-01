x=float(input("enter the x: "))
y=float(input("enter the y: "))
def power(x,y):
    if y >=0 and y==int(y):
        x=x**y
        return x
    else :
        return "error"
print(power(x,y))
 