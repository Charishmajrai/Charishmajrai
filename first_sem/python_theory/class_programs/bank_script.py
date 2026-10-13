#bank operation using script and tuple
#tuple u need to store name , pancardno , accountno=1000 , dateofbirth 
#list emailid , contactno , address , currentbalance

name=input("Enter ur name:")
accountno=int(input("Enter the ACCOUNT NUMBER:")) 
pancardno=int(input("Enter the PAN CARD NUMBER:")) 
dateofbirth=input("Enter the DATE OF BIRTH:")
emailid=input("Enter the emailid:")
contactno=int(input("Enter the contactno:"))
address=input("Enter the address:")
currentbalance=int(input("Enter the current balance:"))

mylsit=[emailid,contactno,address,currentbalance]
mytuple=(name,pancardno,accountno,dateofbirth,mylsit)

print("MY LIST",coustomerdetail)
print("MY TUPLE",mylist)
