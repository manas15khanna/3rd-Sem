# Enter Name, marks of 5 subjects, and calculate total & percentage of a student
name = input("Enter your name: ")
marks = []

for i in range(5):
    mark = float(input(f"Enter marks for subject {i + 1}: "))
    marks.append(mark)

total_marks = sum(marks)
percentage = (total_marks / 500) * 100  # Assuming each subject is out of 100

print(f"Total marks: {total_marks:.2f}")
print(f"Percentage: {percentage:.2f}%")
