n1,n2 = input("Enter  two numbers: ").split()
n1=int(n1)
n2=int(n2)
print("Before swap ")
print("n1",n1)
print("n2",n2)
n1 = n1^n2
n2 = n1^n2
n1 = n1^n2
print("After Swap")
print("n1",n1)
print("n2",n2)