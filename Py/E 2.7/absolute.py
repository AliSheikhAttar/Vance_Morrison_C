def absolute_value(x):
    if x<0:
        return -x
    else: 
        return x
    
av=absolute_value
def result():
    print(av(-100))
    print(av(-1))
    print(av(0))
    print(av(1))
    print(av(1000))

result()

def factorial(x):
    m=1
    for i in range(1,x+1):
        m=i*m
    return m

def factorial_table(y):
    for j in range(y+1):
        print (f"{j} ----> {factorial(j)}")

factorial_table(7)