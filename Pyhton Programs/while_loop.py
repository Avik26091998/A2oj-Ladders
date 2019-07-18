c=0
password=''
while password!='abc123':
    input("Enter password :")
    if password=='abc123':
        print("You're now logged in!")
    c=c+1
    if c==3:
        print("try after sometime! Input limit reached.")
        break
    else:
        print("Sorry,try again!")