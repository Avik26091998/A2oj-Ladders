def _age(age):
    n_age=int(age)
    if n_age > 50 and n_age < 150:
        print("more than 50")
    elif n_age==50:
        print("equal to 50")
    elif n_age < 0:
        print("Invalid Input")
    elif n_age > 150:
        print("Unexpected..")
    else:
        print("less than 50")
    return n_age
age=input("Enter an age : ")
print(_age(age))