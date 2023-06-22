t = (1, "Hello world", True, 4.3)
t2 = (5, 6, 7, 8)

print("t: ")
for i in range(len(t)):
    print(t[i])

print("\nt2: ")
for i in range(len(t)):
    print(t2[i]);

tup = t + t2;

print(tup);

