# 4.	Write a program, which will find all such numbers between 1000 and 3000 (both included) such that each digit of the number is an even number.
# def isEven(num):
#     if num % 2 == 0:
#         return True
#     else:
#         return  False
for i in range(1000,3000+1):
    temp = i
    flag = True
    while temp > 0 :
        digit = temp % 10
        if not digit%2==0:   #isEven(digit)
            flag = False 
            break
        temp = temp // 10
    if flag:
        print(i,end=" ")
        