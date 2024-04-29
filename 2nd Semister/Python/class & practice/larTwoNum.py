n1,n2=input("Enter the two numbers").split()
n1=int(n1)
n2=int(n2)
lar = ((n1+n2)+abs(n1-n2))//2
print(lar)

sml=((n1+n2)-abs(n1-n2))//2
print(sml)