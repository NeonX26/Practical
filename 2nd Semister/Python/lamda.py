Add = lambda a,b : a+b;
print(Add(10,20))

Max = lambda a,b : a if(a>b) else b
print(Max(50,50))

num = [1,2,3,4,5,6,7,8,9,10]
even = list(filter(lambda x :x%2==0 , num))
print(even)