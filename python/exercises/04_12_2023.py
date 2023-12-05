# while True:
#     try:
#         num = int(input("Please enter a number: "))
#     except ValueError:
#         print("That's not a number!")
#     else:
#         print("Good job, you entered a number")
#         break
#     finally:
#         print("RUNS NO MATTER WHAT!")
#
# print("Rest of the game logic still runs...")

def divide(a, b):
    try:
        # return a / b
    # except ZeroDivisionError:
    #     print("Don't divide by 0 pleaseeee!!!!")
    #     print("Something went wrong...")
    # except TypeError as err:
    #     print("a and b must both be either ints or floats!")
    #     print(err)
        result = a / b
    except (ZeroDivisionError, TypeError) as err:
        print("Something is wrong, let me explain: ")
        print(err)
    else:
        print(f"{a} divided by {b} is {result}")


divide('a', 0)
