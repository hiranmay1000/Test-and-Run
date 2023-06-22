num = int(input("Enter number: "))

str_num = str(num)
n = len(str_num)


start = 0
end = n - 1

def validPalindrome(str_num):
    while (start <= end):
        if (str_num[start] != str_num[end]):
            return False
        return True



if (validPalindrome(str_num)):
    print(f"{num} is palindrome");
else:
    print("Not a palindrome number")
