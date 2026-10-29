#collect employee name , employee number , company name , salary 
# store it inside the set and dictionary

employeename=input("Enter the employee name:")
employeenumber=int(input("Enter the employee number:"))
companyname=input("Enter the company name:")
salary=int(input("Enter the salary:"))
email=input("Enter the email:")
phone_no=input("Enter the phone number:")

employee_set={employeename,employeenumber,companyname,salary}
employee_set.update([email,phone_no])

employee_dict={
    "Name":employeename,
    "Employee Number":employeenumber,
    "Company Name":companyname,
    "Salary":salary
}
employee_dict["Email:"]=email
employee_dict["Phone number:"]=phone_no

print("\n Employee Details Using set:")
print(employee_set)

print("\nEmployee Details Using Dictionary")
print(employee_dict)