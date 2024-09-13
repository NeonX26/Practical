from functools import reduce

# Sample list of numbers
num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

even_numbers = list(filter(lambda x: x % 2 == 0, num))
print("Even numbers:", even_numbers)

prime_numbers = list(filter(lambda num: all(num % i != 0 for i in range(2, int(num**0.5) + 1)) and num > 1
,num))
print("Prime numbers:", prime_numbers)

squared_numbers = list(map(lambda x: x**2, num))
print("Squared numbers:", squared_numbers)

cubed_numbers = list(map(lambda x: x**3, num))
print("Cubed numbers:", cubed_numbers)


product = reduce(lambda x, y: x * y, num)
print("Product of all numbers:", product)

Addition = reduce(lambda x, y: x + y, num)
print("Addition of all numbers:", Addition)
