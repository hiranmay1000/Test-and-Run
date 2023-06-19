f_name = input("Enter file name with any extention: ")
f_path = f"C:/Users/Hiranmay-Strix/Documents/computer_world/programs-in-all-languages/python-programs/created-files/{f_name}"

def fileInput(inp):
    thisFile = open(f_path, 'w')
    if(inp):
        thisFile = open(f_path, 'w')
    elif(inp):
        thisFile = open(f_path, 'r')


    school_name = input("Enter school/university name: ")
    school_loc = input("Location: ")
    school_year = input("Year: ")
    school_desc = input("Description: ")


    thisFile.write(f"{school_name} \n")
    thisFile.write(f"{school_loc} \n")
    thisFile.write(f"{school_year} \n")
    thisFile.write(f"{school_desc} \n")

    thisFile.close()

    return f_name

while True:
    print("1. Create new file and add contents\n2. Read contents\n3. Update contents\n4. Overwrite description with hobbies\n5. Exit")
    code = input(">> Choose one from the above options: ")
    if(code == '1'):
        f_name = fileInput(1)
        print(f">> {f_name} has been created and saved successfully !")

    elif (code == '2'):
        thisFile = open(f_path)
        content = thisFile.read()
        print("\n>>")
        print(content)
        print(">>\n")
        thisFile.close()
    elif(code == '3'):
        f_name = fileInput(2)
        print(f">> {f_name} has been updated and saved successfully !\n\n")

    elif(code == '4'): 
        f_name = input("Enter file name: ")

    else:
        print(">> Thank you 🙏 visit again!")
        break


