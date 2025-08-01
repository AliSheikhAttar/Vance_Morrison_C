n=int(input("enter the n: "))
def factorial(n):
    assert n>0            #precondition
    m = 1
    for i in range(2, n + 1):
        assert 0<m        #Loop Invariant
        m = m * i
    assert 0 < m          #post-condition
    return m

print(factorial(n))
