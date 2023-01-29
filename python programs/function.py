def greetUser(first_name, last_name):
    print("Hello" ,first_name, last_name)
    print("How is your day?" ,first_name)

greetUser("Arun", last_name="Thappar")

# square number

def square(num):
    return num * num

val = square(int(input("Square of > ")))
print(f"is {val}")

def concatenate_string(s1, s2):
    return s1 + s2

print(concatenate_string(s1 = input("First name: "), s2 = input("Second name: ")))