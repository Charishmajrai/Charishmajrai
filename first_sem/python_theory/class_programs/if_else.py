print("ticket pricing system")
base_price = 250.0

day=input("Enter the day: ")

if day == "saturday" or day == "sunday":
    ticketprice = base_price+ ( base_price * 0.25)
else:
        ticketprice= base_price 

timing=input("show timing: ")

if timing == "morning" :
    price = ticketprice 
elif timing == "afternoon" :
        price = ticketprice + (base_price * 0.10)
elif timing == "evening" :
        price = ticketprice + (base_price * 0.30)

print("the price :",price)

age=int(input("Enter your age: "))
if age <=5:
    discount = 0.50
elif age <= 59:       
    discount= 0.0
elif age>=60:
        discount = 0.10

final_price = price - (base_price * discount)

print("final price:",final_price)     