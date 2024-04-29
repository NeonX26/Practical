class abc:
    a,b,c = 12,13,14

obj = abc
obj.a = 120 #Changing the value of an data member
print("The Sum of 3 Numbers",obj.a+obj.b+obj.c)