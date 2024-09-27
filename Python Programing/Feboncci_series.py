num = int(input("Enter the number of terms : "))

first=0
second = 1
print(first)
print(second)
for i in range (1,num-1):
    third=first+second
    print(third)
    first = second
    second = third
