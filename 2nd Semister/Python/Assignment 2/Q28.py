# 28.	Write a Python program to check whether the given string is binary.
def is_binary_string(string):
  if not string:
    return False
  for char in string:
    if char not in ('0', '1'):
      return False
  return True

string1 = input("Enter the Binary Number  : ")
string2 = input("Enter any String  : ")

print(is_binary_string(string1))  
print(is_binary_string(string2))  
 
