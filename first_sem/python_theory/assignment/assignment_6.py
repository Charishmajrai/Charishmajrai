student_marks = [[], [], [], [], []]

def read_details():
    for i in range(5):
        print("\n Enter details of student", i + 1)
        name = input("Enter student name:")
        student = [name]
        for j in range(5):
            mark = int(input(f"Enter marks of subject {j + 1}:"))
            student.append(mark)
        student_marks[i] = student

def calculate_total():
    for student in student_marks:
        total = sum(student[1:])
        student.append(total)

def display_details():
    print("\n" + "-" * 75)
    print(f"{'Name':<15}{'Sub1':>8}{'Sub2':>8}{'Sub3':>8}{'Sub4':>8}{'Sub5':>8}{'Total':>10}")
    print("-" * 75)

    for student in student_marks:
        print(f"{student[0]:<15}", end="")
        for mark in student[1:]:
            print(f"{mark:>8}", end="")
        print()

    print("-" * 75)

# Main program
read_details()
calculate_total()
display_details()