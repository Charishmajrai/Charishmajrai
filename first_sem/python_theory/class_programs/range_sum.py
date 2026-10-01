n=int(input("enter the n:"))
total=0
for i in range(1,n+1):
    if i % 2 == 0:
        print(i)
        total=total+i
print("the sum of all even number:",total)

#the count of numbers divisble by both 3 and 5
n=int(input("enter the n:"))
count=0 
for i in range (1,n+1):
    if i % 3 == 0 and i % 5 == 0:
        print(i)
        count=count+1
print("the count of numbers divisible by both 3 and 5:",count)

#the largest prime number found in the range
n=int(input("enter the n:"))
sum=0
for i in range (2,n+1):
    prime = True
    for j in range (2,i):
        if i % j == 0:
            prime = False 
            break
        if prime :
            sum = i
print("the largest prime number found in the range:",sum)

#The sum of digits of every number that is perfect square (eg.,for 16 - 1+6=7)
n=int(input("enter the n:"))
for i in range (1,n+1):
    root=int(i ** 0.5)
    if root * root == i:
        total=0
        a = i
        while a>0:
            total = total + a % 10 
            a = a // 10
        print("Sum of digits of every number:",i,"=",total)

#Arunning total printed every time the tota; crosses a multiple of 100
n=int(input("enter the n:"))
total=0
for i in range (1,n+1):
    prev_total=total
    total = total + i
    if total // 100 > prev_total // 100:
        print("Running total:",total)