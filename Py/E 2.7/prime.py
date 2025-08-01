def is_divisible(a,b):
    if a%b==0:
        return True
    else:
        return False
# def is_true():
#     assert is_divisible(6,2)
#     assert not is_divisible(2,5)
#     assert is_divisible(0,18)
#     assert is_divisible(51,17)
def is_prime(N):
    if N==2:
        return True
    for x in range(2,N):
        if is_divisible(N,x):
            return False
    return True

def primenumbers(x):
    numbers=list()
    for j in range(2,x):
        if is_prime(j):
            numbers.append(j)
    return numbers
print(primenumbers(100))


