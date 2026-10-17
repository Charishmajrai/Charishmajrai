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

mylist=[emailid,contactno,address,currentbalance]
bank_detail=(name,pancardno,accountno,dateofbirth,mylist)

print("MY LIST",mylist)
print("MY TUPLE",bank_detail)

deposit=[]
depositamount=int(input("Enter the deposite amount:"))
balance=mylist[3]+depositamount
print("Balance after deposite :",balance)
mylist[3]=balance
print("mylist",mylist)
print("mytuple",bank_detail)