def func():
    y=0
    n=0
    a=[]
    x=float(input("enter a number: "))
    while x != -1:
        a.append(x)
        n=n+1
        x=float(input("enter a number: "))
    avg=(sum(a)/n)
    def max(list):
        max=list[0]
        for i in range(len(list)) :
            if list[i]>=max:
                max=list[i]
        return max
    def min(list):
        min=list[0]
        for i in range(len(list)) :
            if list[i]<=min:
                min=list[i]
        return min
    print(f"the number of entries is {n}")
    print(f"the average is {avg}")
    print(f"the minimum is {min(a)}")
    print(f"the maximum is {max(a)}")
func()
