def isPrime(n):
    for i in range (2,n):
        if n % 2 == 0:
            return False
    else:
        return True
lower=1
upper= 50

for j in range(lower,upper+1):
    if isPrime(j):
        print(j)