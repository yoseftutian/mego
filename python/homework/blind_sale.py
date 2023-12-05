import os
another = "yes"
price = 0
name_1 = "d"

while (another[0]) == "y":
    name = input(" enter your name: ")
    price_1 = int(input(" enter your proposal: "))
    another = input("is there another suggestion? ").casefold()
    if (another[0]) == "y":
        os.system('cls' if os.name == 'nt' else 'clear')
    if price_1 > price:
        price = price_1
        name_1 = name
    else:
        price_1 = price
        name = name_1
print(f"the higher is: {price}, and the winner us: {name}")



