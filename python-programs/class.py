class Point:
    def __init__(self, x, y): # constructor
        self.x = x
        self.y = y
    def move(self):
        print("Move")

    def draw(self):
        print("Draw")

p1 = Point(4, 6)
print(p1.x, p1.y)
p1.draw()

class Person:
    def __init__(self, name):
        self.name = name
    
    def talk(self):
        print(f"Hello this is {self.name} and I play cricket...")
    
_person = Person("Dinesh Kartik")
_person.talk()
_person = Person("Virat Kohli")
_person.talk()

# inheritence
    