list_of_tuples = [(10, 20, 40 ,50), (40, 50, 60), (70, 80, 90)]
lst=[]
for i in list_of_tuples:
    temp=i[:len(i)-1]+(100,)
    
    lst.append(temp)
print(lst)
