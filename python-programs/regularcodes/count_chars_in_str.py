str = input("Enter string: ")

print(f"Total chars in the string [{str}] is: {len(str)}")

# this method cannot be applied because strings are immutable in python
# start = 0
# end = len(str) - 1

# while(start <= end):
#     str[start], str[end] = str[end], str[start]
#     start += 1
#     end -= 1

# instead we can do like this 
rev_str = str[::-1]

print(f"{str} in reversed is: {rev_str}")