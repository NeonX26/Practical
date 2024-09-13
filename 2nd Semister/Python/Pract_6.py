def cal_average(grade):
    return sum(grade)/ len(grade)

def processData(data):
    for i in data:
        name = i[0]
        marks = i[1:]
        print(f"Name: {name}")
        print(marks)
        print("Average: ",cal_average(marks))

a = [['stud1',50,50,50],['stud2',40,50,20]]
processData(a)