# 6.	Write a Python program to display automorphic numbers from the range 1 – 1000 ( An automrophic number is one whose square has the same digits as the original number. i.e. 5, 25, 76 etc)

lst = []
for i in range(1,1000+1):
    sqr = i * i
    temp = i
    if (sqr % 10 == temp or sqr % 100 == temp) and i != 1 :
        lst.append(str(i))
print(",".join(lst))