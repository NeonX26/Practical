# 5.	Write a program which accepts a sequence of comma separated 4 digit binary numbers as its input and then check whether they are divisible by 5 or not. The numbers that are divisible by 5 are to be printed in a comma separated sequence. (n=int('0100',2))
num = input("Enter the 4 digit binary numbers seperated by commas :").split(",")
divisible_by_5 = []

for i in num:
    i = int(i,2)
    if i % 5 == 0:
        divisible_by_5.append(str(i))

print(",".join(divisible_by_5))
