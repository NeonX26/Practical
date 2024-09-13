# Program to check whether thr given number is palindrom by passing function name as argument to another function
def func1(n):
    str_num = str(n)
    new_num = str_num[::-1]
    return int(new_num)

def func2(n,func1):
    return n == func1(n)

number = int(input("Enter any number:"))
if func2(number,func1):
    print("The number is pallindrom")
else:
    print("Not a pallindrom")