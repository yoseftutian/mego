import random
import graphic

#level_variables

low_level = 10
High_level = 5

#A variable that checks whether the
# numbers are similar or different
def check_guess(guess, number):

    if guess > number:
        return "Too high, guess again"
    elif guess < number:
        return "Too low, guess again"
    else:
        return "You guessed the number!"

print(graphic.welcome)

difficulty = input("Choose difficulty: 'easy' or 'hard': ").casefold()

if difficulty[0] == "h":
    maximum_attempts = High_level
else:
    maximum_attempts = low_level

number = random.randint(1, 100)

while maximum_attempts > 0:
    guess = int(input("Guess the number: "))

    result = check_guess(guess, number)
    print(result)

    if result == "You guessed the number!":
        print(graphic.you_won)
        break

    maximum_attempts -= 1
    print("You have {} tries remaining".format(maximum_attempts))

if maximum_attempts == 0:
    print("Game over, you lose!")
    print("The number was: {}".format(number))
