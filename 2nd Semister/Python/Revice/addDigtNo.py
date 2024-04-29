num = int(input("Enter the digits of number:"))
sum = 0
while num:
    digit = num %  10
    sum += digit
    num //=10
print(f"The Sum of the digit is {sum}")