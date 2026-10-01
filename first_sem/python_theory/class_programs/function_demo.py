for i in range(1,4):
    print("============STUDENT DETAIL==============")
    roll_no=0
    name=''
    firstmark=0
    secondmark=0
    thirdmark=0
    total=0
    percentage=0
    average=0
    def studentdetail():
        global name,roll_no,firstmark,secondmark,thirdmark
        name=input("Enter the name:")
        rollnumber=int(input("Enter thr roll number:"))
        firstmark=int(input("Enter the first sub mark:"))
        secondmark=int(input("Enter the second sub mark:"))
        thirdmark=int(input("Enter the third sub mark:"))
    def gettotal():
        global total
        total=firstmark+secondmark+thirdmark
        
    def getpercentage():
        global percentage
        percentage= (total/300) * 100
        
    def getaverage():
        global average
        average=total/3
        
    def findGrade():
        if percentage>=75:
            print("Grade:Distinct")
        elif percentage>=60 :
            print("Grade:First class")
        elif percentage>=35:
            print("Grade:Pass")
        else:
            print("Grade:Fail")

    def displaystudentdetail():
        print("The total mark:",total)
        print("The percetage:",percentage)
        print("The average:",average)
        
    #we can also write for statement here
    studentdetail()
    gettotal()
    getpercentage()
    getaverage()
    displaystudentdetail()
    findGrade()