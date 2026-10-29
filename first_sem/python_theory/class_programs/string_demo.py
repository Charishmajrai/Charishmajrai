message='good morning'      #single line string
my_string="how are you"     #single ine string
my_paragraph='''good morning 
how are you'''              #multi line string

#indexing
print(message[0])
print(message[1])
print(message[2])
print(message[3])
print(message[5])
print(message[6])
print(message[7])
print(message[8])
print(message[9])
print(message[10])
print(message[11])

print(message[-12])
print(message[-11])
print(message[-10])
print(message[-9])
print(message[-7])
print(message[-6])
print(message[-5])
print(message[-4])
print(message[-3])
print(message[-2])
print(message[-1])

print(message[0:1])
print(message[0:-1])

print("--------------------------")
print(message.upper())
print(message.lower())
print(message.split())
print(len(message))
print(message.count('g'))
print(message.strip('*'))
print(message.replace('morning','evening'))
print(message.title())
print(message.find('g'))