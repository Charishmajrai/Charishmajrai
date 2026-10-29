my_string='''sachin  KUMAR
sachin@GOOGLE.COM
+91-1234-5684-11'''
Name=(my_string.split('\n')[0])
print('Name :',Name.title())
Email=(my_string.split('\n')[1])
print('Email :',Email.lower())
Contactno=(my_string.split('\n')[2])
print('Contactno :',Contactno.strip('+'))