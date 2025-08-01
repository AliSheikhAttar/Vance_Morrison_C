def print_left_triangle(n):
    for i in range(n):
        print(" "*n + "*"*(i+1))
    print("\""*n)

def print_right_triangle(n):
    for i in range(n):
        print(" "*n+ " "*(n-i)+"*"*(i+1))
print_right_triangle(6)
print_left_triangle(10)