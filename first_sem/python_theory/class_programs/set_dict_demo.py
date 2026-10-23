
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

print("\nEmployee details using tabular column:")

print("-" * 110)
print(f"{'Employee Name':<20}{'Employee Number':<20}{'Company Name':<20}{'Salary':<15}{'Email':<25}{'Phone Number':<15}")
print("-" * 110)

for name, number, company, salary, email, phone in [
    (employeename, employeenumber, companyname, salary, email, phone_no)
]:
    print(f"{name:<20}{number:<20}{company:<20}{salary:<15}{email:<25}{phone:<15}")

print("-" * 110)