def isStringAva(str1,str2):
    return all(char in str1 for char in str2)

string1 = input("Enter a first string: ")
string2 = input("Enter a second string: ")

if isStringAva(string1, string2):
    print(f"Every char in {string2} is available in {string1} ")
else:
    print(f"Not Every char in {string2} is available in {string1} ")
    
