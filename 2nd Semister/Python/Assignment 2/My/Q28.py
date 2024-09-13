# 28.	Write a Python program to check whether the given string is binary.
def is_binary_string(string):
  if not string:
    print("Entered String is not Binary ")
    pass
  for char in string:
    if char not in ('0', '1'):
      print("Entered String is not Binary ")
      pass
  print("Entered String is Binary ")

string2 = input("Enter any String  : ")

is_binary_string(string2)
 
