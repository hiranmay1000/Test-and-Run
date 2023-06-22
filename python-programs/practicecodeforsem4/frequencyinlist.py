elements = [5,3,6,3,6,7,2];

myDict = {};

for ele in elements:
    if (ele in myDict):
        myDict[ele] += 1;
    else:
        myDict[ele] = 1;


for item, freq in myDict.items():
    print(item, freq);