n1,n2,n3 = input("enter the 3 number:").split()
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
lar = ((n1+n2)+abs(n1-n2))//2
lar = ((lar+n3)+abs(lar-n3))//2
print(lar)

sml = ((n1+n2)-abs(n1-n2))//2
sml = ((sml+n3)-abs(sml-n3))//2
print(sml)