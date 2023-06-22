num = int(input("Enter a num: "))

def factorial(num):
    if(num == 0): return 1;

    return num * factorial(num - 1);

print(f"Factorial of {num} is {factorial(num)}");