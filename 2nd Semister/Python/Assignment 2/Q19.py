# 19.	Write a Python program to check if a list is empty or not.
def check_list_empty(input_list):
    if len(input_list) == 0:
        print("The list is empty.")
    else:
        print("The list is not empty.")

my_list1 = []  
check_list_empty(my_list1)

my_list2 = [1, "Vishal", 3]  
check_list_empty(my_list2)