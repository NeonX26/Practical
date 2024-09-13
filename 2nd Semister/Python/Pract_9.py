def count_digits(number):
    if number < 0:
        number = -number
    return len(str(number).replace('.',''))


number = 12345.6789
print(f"Number of digits in {number}: {count_digits(number)}")
number = -123456
print(f"Number of digits in {number}: {count_digits(number)}")
number = 0
print(f"Number of digits in {number}: {count_digits(number)}")