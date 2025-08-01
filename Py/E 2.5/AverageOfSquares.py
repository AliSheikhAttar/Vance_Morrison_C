n=int(input("enter the n: "))
def average_of_squares0(n):
    z=0
    for i in range(n):
        m=i**2
        z=z+m
    x=z/n
    return x
print(f"the average of squares of whole numbers from 0 to {n-1} is {average_of_squares0(n)}")

n=int(input("enter the n: "))
print(n)
def average_of_squares1(n):
    z=0
    for i in range(1,(n+1)):
        u=i**2
        z=z+u
        print(z)
    x=z/n
    return x
print(f"the average of squares of whole numbers from 0 to {n-1} is {average_of_squares1(n)}")

print("-------conclusion--------")
# these functions are made for conclusion they are not part of vance morrison exercises
def average_of_squares00(n):                        
    z=0
    for i in range(n):
        m=i**2
        z=z+m
    x=z/n
    return x

def average_of_squares11(n):
    z=0
    for i in range(1,(n+1)):
        u=i**2
        z=z+u
    x=z/n
    return x

print(f"we can clearlly see that the result for average_of_squares0(5)={average_of_squares00(5)} is not equal to average_of_sqares1(4)={average_of_squares11(4)}.")
print("because although the total of the squares are the same but the qauntity of the squares are different so the average wont be eqaul.")

