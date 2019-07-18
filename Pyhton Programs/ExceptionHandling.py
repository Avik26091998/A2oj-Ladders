def func(a,b):
    try :
        c= a/b
        return c
    except ZeroDivisionError:
            return "Division by zero error"
print(func(1,2))
print("***************")
print(func(5,0))
