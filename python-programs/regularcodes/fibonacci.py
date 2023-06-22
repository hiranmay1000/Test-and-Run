def fib(num):
    firstVal = 0
    secondVal = 1
    # 0 1 1 2 3 5 8
    print(firstVal)
    print(secondVal)

    for i in range(2, num):
        temp = firstVal + secondVal
        print(temp)
        firstVal = secondVal
        secondVal = temp


n = int(input("Enter num:"))
fib(n)

