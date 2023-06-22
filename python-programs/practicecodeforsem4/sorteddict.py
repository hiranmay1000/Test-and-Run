from collections import OrderedDict as od

myDictionary = {
    "c": 32,
    "a": 23,
    "d": 32,
    "b": 43
}

print("Unsorted dictionary: ")
for key, val in myDictionary.items():
    print(key, val)

def sortedDict(myDictionary):
    return od(sorted(myDictionary.items()))


print("Sorted dictionary: ")
for key, val in sortedDict(myDictionary).items():
    print(key, val)



