fileName = "myfile.txt";
filePath = r"C:\Users\Hiranmay-Strix\Documents\computer_world\programs-in-all-languages\python-programs\practicecodeforsem4\CharCountInFile\MyFiles\\" + fileName
file = open(filePath, 'w');
file.write("Hello this is a python program session")
file.close();


def cntChar(filePath):
    try:

        with open(filePath, 'r') as file:
            content = file.read();

            content = content.replace(" ", "").lower();
            charCntDict = {};

            for char in content:
                if char in charCntDict:
                    charCntDict[char] += 1;
                else:
                    charCntDict[char] = 1; # if new char arrives

            for char, cnt in charCntDict.items():
                print(char, cnt);


    except FileNotFoundError:
        print("File is not found!");


fileName = "myfile.txt";
filePath = r"C:\Users\Hiranmay-Strix\Documents\computer_world\programs-in-all-languages\python-programs\practicecodeforsem4\CharCountInFile\MyFiles\\" + fileName;

cntChar(filePath)
