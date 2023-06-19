import random

lives = 10
totalPoints = 0

def playGame(lives, totalPoints):
    print("Guess any number from 1 - 6")
    while lives:
        secret_num = random.randint(1, 4)
        guess = int(input("\nGuess: "))
        if(guess == secret_num):
            print("You guessed it right")
            totalPoints += 10
            lives += 1
        else:
            print(f"Secret num was: {secret_num}")
            print("Try again!")
        lives -= 1
        print(f"[{lives}] lives remaining")

print(f"total points: {totalPoints}")

playGame(lives, totalPoints)
def gameMenu():
    if totalPoints >=10:
        print(f"Your total points is: {totalPoints}")
        user = (int(input("Want to buy lives?\nPress 1: Buy lives\nPress 2: Start New Game: \nPress 3: Quit")))
        if(user == 1):

            if(totalPoints >= 10):
                print(f"{totalPoints // 5} lives bought")
                playGame(totalPoints // 5, totalPoints)
            elif(user == 2):
                playGame(10, 0)
            elif(user == 3):
                print("Thank you for playing Guess Game")
            else:
                print("\nYou lost")