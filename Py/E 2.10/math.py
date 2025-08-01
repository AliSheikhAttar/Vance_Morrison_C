def eulers_constant(precise):
    n=0
    z=1
    m=1
    while 1/m > precise:
        n=n+1
        m=n*m
        z=1/m+z
    return z
print(eulers_constant(0.00000000000000000000001))

def power(x,y):
    if y >=0 and y==int(y):
        x=x**y
        return x
    else :
        return "error"
def eulers_constant(precision):
    n=0
    z=1
    m=1
    while 1/m > precision:
        n=n+1
        m=n*m
        z=1/m+z
    return z
print(eulers_constant(0.0001))

def factorial(n):
    j = 1
    for i in range(2, n + 1):
        j = j * i
    return j
def exp(x,precision):
    m=1
    n=0
    j=1
    while j > precision:
        j=(power(x,(m-1)))/factorial(m-1)
        n=j+n
        m=m+1
    return n
print(exp(1,0.000001))
print(exp(2,0.000001))

def exp2(x, precision):
    m=1
    j=1
    n=1
    z=1
    while z > precision:
        z=m*x/n
        j=z+j
        m=z
        n=n+1
    return j
print(exp2(1,0.000001))
print(exp2(2,0.000001))

def abs(x):
    if x>=0:
        return x
    else:
        return -x
def near(x,y,closeness):
    if abs(abs(x)-abs(y))/1000<closeness:
        return True
    else:
        return False
# for test
print(near(-.1,-1.1,0.001)) 

def test_computing():
    assert near((exp(1,0.0001)),(exp2(1,0.0001)),0.001)
    assert near((exp(2,0.000001)),(exp2(2,0.000001)),0.001)
    assert near((exp(19,0.00000000001)),(exp2(19,0.00000000001)),0.001)

test_computing()

def power(x,y):
    if y >=0 and y==int(y):
        x=x**y
        return x
    else :
        return "error"
def factorial(n):
    j = 1
    for i in range(2, n + 1):
        j = j * i
    return j
def sin(x,precision):
    m=1
    n=0
    j=1
    while abs(j) > precision:
        z=(-1)**(((m+1)/2)+1)
        j=((power(x,m))/factorial(m))*(z)
        n=j+n
        m=m+2
    return n
print(sin((11/14),0.00000001))
print(sin((11/7),0.00000001))
print(sin((0),0.00000001))

def square_root(x,precision):
    lowerband = 0
    upperband= x+1
    lowerband<x<upperband
    n=0
    while upperband-lowerband > precision:
        mid=(upperband+lowerband)/2
        if mid**2<x:
            lowerband=mid
        else:
            upperband=mid
        n=n+1
    return mid,n
print(square_root(2,0.000001))

def power(x,y):
    if y >=0: #and y==int(y): because here we are calculating the nth root of a number 
        x=x**y
        return x
    else :
        return "error"
def square_root(x,precision):
    lowerband = 0
    upperband= x+1
    lowerband<x<upperband
    n=0
    while upperband-lowerband > precision:
        mid=(upperband+lowerband)/2
        if mid**2<x:
            lowerband=mid
        else:
            upperband=mid
        n=n+1
    return mid,n
def root(x,n,precision):
    lowerband = 0
    upperband= x+1
    lowerband<x<upperband
    m=0
    while upperband-lowerband > precision:
        mid=(upperband+lowerband)/2
        if power(mid,n)<x:
            lowerband=mid
        else:
            upperband=mid
        m=m+1
    return mid,m
print(root(27,3,0.00000000001))

def ln(x,precision):
    lowerband=0
    upperband=x+1
    n=0
    while upperband-lowerband>precision:
        mid=(upperband+lowerband)/2
        if exp2(mid,precision)<x:
            lowerband=mid
        else:
            upperband=mid
        n+=1
    return mid
print("________________________________")
print(f"ln({exp2(1,0.00000001)})  =  {ln(exp2(1,0.00000001),0.00000000000001)}")
print(f"ln({exp2(5,0.000000001)})  =  {ln(exp2(5,0.00000001),0.00000000000001)}")