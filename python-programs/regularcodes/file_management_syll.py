f1_path = "C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/f1.txt"
f2_path = "C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/f2.txt"

f1 = open(f1_path, 'w')
f1.write("This is file one!!")

f1.close()

f2 = open(f2_path, 'w')
f2.write("Hey!! This is file 2")

f2.close()

f1 = open(f1_path, 'r')
content = f1.read()
print(content)
f1.close()

f2 = open(f2_path, 'r')
content2 = f2.read()
print(content2)
f2.close()

words_in_f1 = content.split()
words_in_f2 = content2.split()

if(len(words_in_f1) > len(words_in_f2)):
    print(f"Word count of file 1 is greater than file 2\nLength: [{len(words_in_f1)}]")
else:
    print(f"Word count of file 2 is greater than file 1\nLength: [{len(words_in_f2)}]")



f3_path = "C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/f3.txt"
f3 = open(f3_path, 'a')
f3.write(content + content2)

f3.close()

f3= open(f3_path, 'r')
content3 = f3.read()

print(content3)
f3.close()















