def print_left_triangle(n):
    for i in range(1,n+1):
        if i%2!=0:
            print("%"*i)
        else :
            print("*"*i)
print_left_triangle(10)

def print_cone(n):
    if n%2==0: 
        print("the entered number should be odd.")
    else :
        print(" "*n+"^")
        for i in range(1,n+1):
            print(" "*(n-i)+ "/"*i+"|"+"\\"*i)
print_cone(9)

for i in range(1,10,2):
    print_cone(i)
