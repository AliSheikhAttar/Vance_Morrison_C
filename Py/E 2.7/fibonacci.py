def fibonacci(n):
    fibs=[1,1]
    for i in range(2,n):
        fibs.append(fibs[i-1]+fibs[i-2])
    return fibs
print(fibonacci(20))