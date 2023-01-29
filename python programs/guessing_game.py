import random

lives = 10
totalPoints = 20

def playGame(lives):
    print("Guess any number from 1 - 6")
    while lives:
        secret_num = random.randint(1, 4)
        guess = int(input("\nGuess: "))
        if(guess == secret_num):
            totalPoints =+ 10
            print("You guessed it right")
        else:
            print(f"Secret num was: {{secret_num}}")
            print("Try again!")
        lives -= 1
        print(f"[{lives}] lives remaining")

print(totalPoints)

playGame(lives)
if totalPoints >=10:
    print(f"Your total points is: {totalPoints}")
    user = (int(input("Want to buy lives?\nPress 1: Buy lives\nPress 2: Start New Game: \nPress 3: Quit")))
    if(user == 1):
        if(totalPoints >= 10):
            print(f"{totalPoints // 5} lives bought")
            playGame(totalPoints // 5)
    elif(user == 2):
        playGame(10)
    else:
        print("Thank you for playing Guess Game")
        exit
else:
    print("\nYou lost")
