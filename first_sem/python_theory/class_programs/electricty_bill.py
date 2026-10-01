print("calculate a household's electricity bill ")

category=input("enter the category : ")
if category == "commercial":
    if u <=300 and u>100:
        mid= u-base
        bill= (mid*12)+(base*10)
    elif u>300:
        high=u-400
        mid=u-(base+high)
    print(1)
    u=int(input("Enter the no of units:"))
    base=100
    
    if u<=100:
        bill=u*10
        bill=(high*15)+(mid*12)+(base*10)
    print("the bill : ",bill)
    peakthreshold=input(" is peakthreshold found[yes/no]:")
    if peakthreshold  == "yes" :
        penalty_bill=bill+100
    else: 
        penalty_bill=bill
    print("the bill after threshold :",penalty_bill)
    payment=input("if payment is before due date[yes/no]:")
    if payment == 'yes':
        payment=penalty_bill-(10/100*bill)
        print("------------discount available----------")
    else:
        print("---------discount is not applied--------")
        payment=penalty_bill
    print("the bill after discount:",payment)
    
    
else: 
    category == "non-commercial"
    print(0)
    u=int(input("Enter the no of units:"))
    base=100
    if u <=100:
        bill1=u*5
    elif u <=300 and u>100:
        mid=u-base
        bill1=(mid*6)+(base*5)
    elif u>300:
        high=u-400
        mid=u-(base+high)
        bill1=(high*8)+(mid*6)+(base*5)
    print("the bill after unitsconsumed : ",bill1)
    peakthreshold=input(" is peakthreshold found[yes/no]:")
    if peakthreshold == "yes" :
        penalty_bill1=bill1+50
    else: 
        penalty_bill1=bill1
    print("the bill after threshold :",penalty_bill1)
    payment=input("if payment is before due date[yes/no]:")
    if payment == 'yes':
        payment=penalty_bill1-(10/100*bill1)
        print("------------discount available----------")
    else:
        print("---------discount is not applied--------")
        payment=penalty_bill1
    print("the bill after discount:",payment)
    
