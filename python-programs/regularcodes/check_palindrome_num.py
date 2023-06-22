def isPalindrome(num):
    numInStr = str(num)
    start = 0
    end = len(numInStr) - 1

    while(start <= end):
        if( numInStr[start] != numInStr[end] ):
            return 0
        start += 1
        end -= 1

    return 1


n = int(input("Enter any num: "))

if(isPalindrome(n)):
    print(f"{n} is Palindrome number")
else:
    print(f"{n} is NOT Palindrome number")
