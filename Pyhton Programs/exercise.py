def string(st):
    try:
        return len(st)
    except TypeError:
        return "numbers don't have len()"
print(string("Hello.world"))
print(string(1000))