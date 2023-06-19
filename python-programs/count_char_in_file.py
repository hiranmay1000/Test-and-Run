file_name = "my_file.txt"
file_path = (f"C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/{file_name}")

this_file = open(file_path, 'w')
content = this_file.write("Hi, this is Hiranmay's computer zone")
print(content)
this_file.close()

file_path = (f"C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/{file_name}")
this_file = open(file_path, 'r')
content = this_file.read()
print(content)

repeated_chars = {}
for char in content:
    repeated_chars[char] = repeated_chars.get(char, 0) + 1

for char, count in repeated_chars.items():
    print(f"{char} : {count}")

this_file.close()