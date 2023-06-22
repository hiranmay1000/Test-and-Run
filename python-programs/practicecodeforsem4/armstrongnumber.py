num = int(input("Enter number: "))
temp = num
sum_ = 0
cnt = 0

while(temp != 0):
    cnt += 1
    temp //= 10

temp = num

while(temp != 0):
    val = temp % 10
    sum_ += val**cnt
    temp //= 10


if(sum_ == num):
    print(f"{num} is an Armstrong number")
else:
    print(f"{num} is NOT an Armstrong number")
