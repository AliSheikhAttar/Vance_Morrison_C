n=int(input("enter the n: "))
def factorial(n):
    m = 1
    for i in range(2, n + 1):
        m = m * i
    return m

print(factorial(n))

for k in range(1,n+1):
    z=factorial(k)
    print(z)

n=int(input("enter the n: "))
def factorial(n):
    m = 1
    for i in range(2, n + 1):
        m = m * i
    return m
F= factorial
for k in range(1,n+1):
    z=F(k)
    print(f"{k}----> {z}")



       
