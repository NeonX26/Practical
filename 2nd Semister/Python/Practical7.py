def cal_average(marks):
    total_marks = sum(marks)
    avg = total_marks / len(marks)
    return total_marks, avg

students = {}

num = int(input("Enter a Number Of Students: "))

for i in range(num):
    Name = input("Enter a Name Of Student: ")
    marks = []
    for j in range(2):  # assuming each student has 2 subjects
        subject_marks = int(input("Enter a Marks of subject: "))
        marks.append(subject_marks)
    students[Name] = marks

print("\n Students Results")
for Name, marks in students.items():
    total_marks, avg = cal_average(marks)
    print(f"{Name}: Total Marks-{total_marks}, Avg-{avg}")