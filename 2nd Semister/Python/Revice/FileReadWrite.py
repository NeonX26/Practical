# Create a list of 10 integers
numbers = [x for x in range(1, 101)]

# Write the list to a binary file
with open("numbers.bin", "wb") as f:
    for num in numbers:
        f.write(num.to_bytes((num.bit_length() + 7) // 8, byteorder="little"))

# Read the list back from the binary file
with open("numbers.bin", "rb") as f:
    numbers = []
    while True:
        try:
            num = int.from_bytes(f.read(4), byteorder="little")
            numbers.append(num)
        except EOFError:
            break

# Find the smallest and largest values
smallest = min(numbers)
largest = max(numbers)

print("Smallest value: ", smallest)
print("Largest value: ", largest)