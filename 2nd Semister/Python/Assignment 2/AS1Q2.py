num = int(input("Enter a number: "))

if num == 0:
    print("Zero has one digit.")
elif num < 0:
    num = abs(num)
    num_of_digits = 0
    while num > 0:
        num //= 10
        num_of_digits += 1
    print("The absolute value of", num, "has", num_of_digits, "digits.")
else:
    num_of_digits = 0
    while num > 0:
        num //= 10
        num_of_digits += 1
    print("The number", num, "has", num_of_digits, "digits.")