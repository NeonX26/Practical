# 11.	Find the first occurrence of a number in a list using a while loop:
def find_first_occurrence(lst, num):
    i = 0
    while i < len(lst):
        if lst[i] == num:
            return i
        i += 1
    return -1

numbers = [1, 2, 3, 4, 5, 5, 6, 7, 8, 9]
print(numbers)
occur = int(input("Enter the number to find the Occurance "))
print(find_first_occurrence(numbers, occur))
