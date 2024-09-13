start= int(input("Enter the starting rang  of numbers:"))
end= int(input("Enter the ending rang  of numbers:"))
for i in range(start,end+1):
    count =0
    for j in range(2,i):
        if (i % j) == 0:
            count += 1
            if count !=0:
                print(i," is not prime")
                break
            
            