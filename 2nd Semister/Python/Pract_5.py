def isStringAva(str1,str2):
    for char in str2:
        if str1.find(char)==-1:
            return False
        return True
string1 = input("Enter the first String:")
string2 = input("Enter the second String:")

if isStringAva(string1,string2):
    print(f"Every character in {string2} is present in {string1}")
else:
    print(f"Not Every charater in {string2} is present in {string1}")
