n1,n2,n3 = input("Enter three number:").split()
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
lar = ((n1+n2) + abs(n1-n2))//2
lar = ((lar+n2) + abs(lar-n2))//2
print(lar)
sml = ((n1+n2) - abs(n1-n2))//2
sml = ((sml+n2) - abs(sml-n2))//2
print(sml)