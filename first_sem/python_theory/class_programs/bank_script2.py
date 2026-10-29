n = int(input("Enter the number of accounts: "))
account_details=[]
for i in range(n):
    name = input("Enter the account holder name: ")
    pan_number = int(input("Enter PAN number: "))
    dob = input("Enter date of birth: ")
    account_number=int(input("Enter the account number:"))
    emailid=input("Enter the email_id:")
    contact=int(input("Enter the contact number:"))
    address=input("Enter the address:")
    balance=int(input("Enter the current balance:"))
    bank_details=(name,pan_number,dob,account_number,[emailid,contact,address,balance])
    current_balance=bank_details[4][3]
    new_deposit=500
    current_balance=current_balance+new_deposit
    bank_details[4][3]=current_balance
    account_details.append(bank_details)
    
print("Account details:",account_details)

for i in range(n):
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Show accounts")
    print("4.EXit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        account_number = int(input("Enter account number: "))

        for i in account_details:
            if i[3] == account_number:
                print("Account found...", i[0])
                amount = int(input("Please enter deposit amount: "))
                i[4][3] = i[4][3] + amount
                print("Current balance:", i[4][3])
                break
        else:
            print("Invalid account number")

    elif choice == 2:
        account_number = int(input("Enter account number: "))

        for i in account_details:
            if i[3] == account_number:
                amount = int(input("Enter withdrawal amount: "))

                if amount > 0 and amount <= i[4][3]:
                    i[4][3] = i[4][3] - amount
                    print("Current balance:", i[4][3])
                else:
                    print("Insufficient balance or invalid amount")
                break
        else:
            print("Invalid account number")

    elif choice == 3:
        print("Your account details:", account_details)
    
    elif choice == 4:
        print("Thank you!")
        break
    else:
        print("Invalid choice")