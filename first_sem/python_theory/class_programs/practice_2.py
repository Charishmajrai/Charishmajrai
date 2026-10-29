name = """ 
anjali  MENON 
anjali.menon@college.edu
+91-98765-43210
"""
print("==============================")
print("          PROFILE CARD        ")
print("==============================")
name,email,phone=name.split("\n")[1],name.split("\n")[2],name.split("\n")[3]
print("Name:",name.title().replace("  ",""))
print("Initails:",name.split()[0][0].upper() + name.split()[1][0].upper())
print("Email:",email.lower())
print("Domain:",email.split("@")[1].lower())
print("Phone:","*"*6+phone[-4:])
if len(phone)==10:
    print("Valid:True")
else:
    print("Invalid:False")