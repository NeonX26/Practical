# 1.	Write a program to display all prime numbers within a range
def isPrime(num):
    if num==1: return False
    for i in range(2,num):
        if  num % i == 0:
            return False
    return  True
    
lower,upper = input("Enter the Range to find display all prime numbers within a range:").split("-")
lower = int(lower)
upper = int(upper)
for i in range(lower,upper+1):
    if  isPrime(i):
        print(i,end=" ")

# RESTART: E:\College Practical\Python\Assignment 2\Q1.py
#Enter the Range to find display all prime numbers within a range:1-15
#2 3 5 7 11 13 
