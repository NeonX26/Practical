students ={}
num = int(input("Enter the number of student:"))
for i in range(num):
    Name = input("Enter Student's name : ")
    marks = []
    for j in range(2):
        subject_Marks = int(input("Enter the subjects marks"))
        marks.append(subject_Marks)
    students[Name]=marks