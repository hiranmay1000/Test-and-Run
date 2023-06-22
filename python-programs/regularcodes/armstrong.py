def isArmstrong(num):
    temp = num
    power = 0
    while( num!=0 ):
        num = num // 10
        power += 1 
    
    num = temp
    total = 0
    while(num!=0):
        digit = num % 10
        num = num // 10
        total += pow(digit, power)

    if(total == temp):
        return 1
    else:
        return 0
    

n = int(input("Enter any num: "))
ans = isArmstrong(n)

if(ans):
    print(f"{n} is Armstrong number")
else:
    print(f"{n} is NOT Armstrong number")