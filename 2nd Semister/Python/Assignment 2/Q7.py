# 7.	Write a Python program to find numner of digits in the nth Fibonacci number.
num = int(input("Enter  the value for 'n': "))
def fib_digits(num):
    a,b = 0,1
    count=0
    for i in range(3,num+1):
        c = a + b
        a = b 
        b = c
        print(c)
    while c:
        count +=1
        c = c // 10
    print(count)
fib_digits(num)