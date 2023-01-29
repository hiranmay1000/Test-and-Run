# example - 1
client = {
    "name": "Roshan Gupta",
    "age": 27,
    "is_verified": True,
    "income": 1200000,
}
client["birthdate"] = "21/31/1997"
print(client["name"])
print(client["birthdate"])

# example - 2
dig_mapping = { 
    "0" : "Zero",
    "1": "One",
    "2": "Two",
    "3": "Three", 
    "4": "Four", 
    "5": "Five", 
    "6":"Six",
    "7": "Seven",
    "8": "Eight",
    "9": "Nine",
}

# output = ""
# phone = input("Phone: ")

# for ch in phone:
#     output += dig_mapping.get(ch, "!") + " "


# print(output)


# example 3

get_emoji = {
    ":)" : "😀",
    ":(" : "😌",
    ":>" : "😗",
}

user = input("> ")
words = user.split(' ')
output = ""

for word in words :
    output += get_emoji.get(word, word) + " "

print(words)

