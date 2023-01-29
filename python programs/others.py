temp = 22

if temp < 18:
    print("Cold outside")
elif temp > 18 and temp < 24:
    print("Normal weather")
else:
    print("Hot outside")

i = 0
while i < 12:
    print(i * "* ")
    i += 2

# Lists
i = 0
names = ["Hiranmay", "Tanmay", "Nizam", "Shubham", "Dinank"]
names[0] = "Manab"
while i < 3:
    print(names[i:3])
    i += 1

# List method
number = [1,2,3,4,5]
number.insert(0, -1)
number.remove(2)

print(3 in number)
print(len(number))

# For loop
number = [3,5,7,8,9]
for item in number:
    print(item)

#while loop
i=0
print("Using while loop: ")
while i < len(number):
    print(number[i])
    i+=1

# range 
print("\nNew\n")
nums = range(5)
for num in nums:
    print(num)

print("\nNew 2\n")
nums = range(5, 11)
for num in nums:
    print(num)


print("\nNew 3\n")
nums = range(5, 11, 2)
for num in nums:
    print(num)

print("\nNew 4\n")
for num in range(6,16):
    print(num)


#---------________

number = [3,5,7,8,9]
print(number.count(5))


# tuple (similar to list) // immutable (cannot be modified or change)
numbers = (1,2,3)
# numbers[1] = 3 # cannot be mutate (error)

print(numbers)

# unpacking
coortdinates = (1,2,3)
a, b, c = coortdinates # variables must be of size fo tuple list

print(a, b, c)  