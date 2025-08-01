def is_divisible(a,b):
    if a%b==0:
        return True
    else:
        return False
def is_prime(N):
    assert N==int(N)          #precondition
    assert 2 <= N             #precondition
    if N==2:
        return True
    for x in range(2,N):
        if is_divisible(N,x):
            return False
    return True
