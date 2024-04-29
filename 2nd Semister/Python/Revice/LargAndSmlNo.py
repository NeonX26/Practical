n1,n2,n3 = input("Enter three numbers:").split()
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
larg=((n1+n2)+abs(n1-n2))//2
larg=((larg+n3)+abs(larg-n3))//2
print("Largest Number:",larg)

sml = ((n1+n2)-abs(n1-n2))//2
sml = ((sml+n3)-abs(sml-n3))//2
print("Smallest Number:",sml)