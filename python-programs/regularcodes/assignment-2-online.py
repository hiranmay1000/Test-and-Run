
n = int(input("Enter total size of chars: "))
chars = []
for i in range(0, n):
    char = input(f"Enter char [{i}]: ")
    chars.append(char)

def toStr(chars):
    temp = ""
    for i in chars:
        temp += i
    return temp

myStr = toStr(chars)
print(myStr)
