# 3.	Write a Python function to check whether a number is perfect or not from 1 to 10000
def isPerfect(num):
    if num == 1:
        return False
    sum = 1
    for  i in range(2, num // 2 + 1):
        if num % i == 0:
            sum += i
    if sum == num:
        return True
    else:
        return False

print("The perfect numbers are:")
for i in range(1,10000+1):
    if isPerfect(i):
        print(i,end=" ")
        
