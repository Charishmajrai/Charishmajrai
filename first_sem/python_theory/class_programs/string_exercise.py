#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print("=================================")
print("         PROFILE CARD            ")
print("=================================")
print("Name : ",name.title().replace("  ",""))
print("Intials :",name.split()[0][0].upper()+name.split()[1][0].upper())
print("Email :",email.lower())
print("Domain :",email.split("@")[1].lower())
print("Phone :","*"*9 + phone[-4]+phone[-3]+phone[-2]+phone[-1])
if len(phone) == 10:
    print("Valid :", True)
else:
   print("Invalid ")
print("=================================")

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()