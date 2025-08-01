for i in range(1,100):
    for j in range(1,100):
        for k in range(1,100):
            if i<j<k and i*i+j*j==k*k:
                print("i= ",i,  "j= ",j,  "k= ",k)
