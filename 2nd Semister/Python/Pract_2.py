n1,n2 = input("Enter 2 numbers :").split()
n1 = int(n1)
n2 = int(n2)
n1 = n1 ^ n2
n2 = n1 ^ n2
n1 = n1 ^ n2
print("n1 = ",n1)
print("n2 = ",n2)