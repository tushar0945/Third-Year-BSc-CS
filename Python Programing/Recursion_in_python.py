
def add(k):
    if k>0:
        return k + add(k-1)
    else:
        return 0
    
number=6
result=add(number)
print(result)