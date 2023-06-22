file_name = input("Enter file name with extention: ")
file_path = r"C:\Users\Hiranmay-Strix\Documents\computer_world\programs-in-all-languages\python-programs\practicecodeforsem4\FileManagement\AllFiles\\" + file_name;

file = open(file_path, 'w');
file.write("This is a python tutorial")
file.close();

file = open(file_path, 'a');
append = input("Add text: ")
file.write("\nasf da sfda sfdasfasf\n")
file.write(append);
file.close();

file = open(file_path, 'r')
file.read();
file.close();