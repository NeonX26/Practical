# 24.	Write a Python program to extract specified size of strings from a give list of string values.
def extract_strings(input_list, min_length=0, max_length=-1):
    extracted_strings = []
    for string in input_list:
        if min_length <= len(string) <= max_length:
            extracted_strings.append(string)
    return extracted_strings

List_String = ["Vishal","VJ","Ankit", "Rahul", "Aryan", "Prince"]
extracted_strings = extract_strings(List_String, 2, 3)
print(extracted_strings)