emails=["in@gmail.com","ad@hotmail.com","ceo@ymail.com"]
c=input("ID to find ? ")
for var in emails:
    
    if c in var:
        print(var)
    elif len(c)<2:
        print("More inputs needed!")
        break