# 2.	Write a program to count the total number of digits in a number
num = int(input("Enter the number to count the total number of digits in a number:"))
temp = num
count = 0
while  temp > 0:
    count += 1
    temp //= 10
print ("The Total Number Of Digits In a Number {0} Is {1}".format(num,count))
