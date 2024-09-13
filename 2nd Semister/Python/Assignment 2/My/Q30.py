# 30.	Write a Python program to compute the sum of the digits in a given string. 
def sum_of_digits(s):
    sum = 0
    for c in s:
        if c.isdigit():
            sum += int(c)
    return sum
str = input("Enter a String Containing digits and alphabet: ")
print("Sum of the digits are:")
print(sum_of_digits(str)) 
