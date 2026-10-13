#to process single one student data 
#datas are name,roll no,mobile no,email id,5 subject marks,and get the subject total mark
#implemented using nested list.
firstmark=[]
secondmark=[]
thirdmark=[]
fourthmark=[]
fifthmark=[]
total=[]
student_data=["rollnumber","name","mobile_no","email",[firstmark,secondmark,thirdmark,fourthmark,fifthmark],[total]]
def studentdtail():
    global rollnumber , name , mobile_no , email,firstmark,secondmark,thirdmark,fourthmark,fifthmark
    rollnumber=int(input("Enter the roll no:"))
    name=input("Enter the name:")
    mobile_no=int(input("Enter the mobile number:"))
    email=input("Enter the email ID:")
    firstmark=int(input("Enter the first sub mark:"))
    secondmark=int(input("Enter the second sub mark:"))
    thirdmark=int(input("Enter the third sub mark:"))
    fourthmark=int(input("Enter the fourth sub marks:"))
    fifthmark=int(input("Enter the fifth sub mark:"))

def gettotal():
    global total
    total=firstmark+secondmark+thirdmark+fourthmark+fifthmark

def displaystudentdetail():
    print("-----student data-------")
    print("Roll Number:",rollnumber)
    print("Name:",name)
    print("Email:",email)
    print("Mobile number:",mobile_no)
    print("First sub mark:",firstmark)
    print("Second sub mark:",secondmark)
    print("Third sub mark:",thirdmark)
    print("Fourth sub mark:",fourthmark)
    print("Fifth sub mark:",fifthmark)
    print("Total:",total)

studentdtail()
gettotal()
displaystudentdetail()