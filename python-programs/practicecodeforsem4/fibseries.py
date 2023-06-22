num = int(input("Enter number: "))

def fibonacci(n):
    if(n <= 1): return n

    return fibonacci(n - 1) + fibonacci(n - 2)

for i in range(num):
    print(fibonacci(i))

# 0 1 1 2 3 5 8 13