# def processData(data):
#     for i in data:
#         name = i[0]
#         marks = i[1:]
#         print(f"Name:{name} \nMarks: {marks}")
#         print("Average mark is :", cal_Average(marks))
    
# def cal_Average(nums):
#     return sum(nums)/len(nums) 
# a = [["Vishal",50,50,50],["Sandeep",50,50,50]]
# processData(a)

def cal_Ave(mark):
    return sum(mark)/len(mark)

def ProccessData(data):
    for i in data:
        name = i[0]
        marks = i[1:]
        print(f"Name of the Student {name}")
        print(f"Marks of the student {marks}")
        print("Average marks of the student  are ",cal_Ave(marks))
        
Stud = [["Vishal",90,90,80],["Sandeep",80,90,80]]
ProccessData(Stud)

    
