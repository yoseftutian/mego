
def multiply_numbers():
    a = float(input("Enter the first number: "))
    b = float(input("Enter the second number: "))
    c = float(input("Enter the third number: "))

    print(a * b * c )

#multiply_numbers()

def user_full_name():
    first_name = input()
    family_name = input()
    print(f"{first_name} {family_name}")
#user_full_name()



def find_largest_number():
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    num3 = float(input("Enter the third number: "))

    largest_number = max(num1, num2, num3)
    print("The largest number is:", largest_number)


#find_largest_number()



def find_longest_name():
    student1 = input("Enter the name of the first student: ")
    student2 = input("Enter the name of the second student: ")
    student3 = input("Enter the name of the third student: ")

    # Use len() to find the length of each name
    length1 = len(student1)
    length2 = len(student2)
    length3 = len(student3)

    if length1 >= length2 and length1 >= length3:
        longest_name = student1
    elif length2 >= length1 and length2 >= length3:
        longest_name = student2
    else:
        longest_name = student3

    print(longest_name)


#find_longest_name()



def check_even_or_odd():
    number = int(input("Enter a number: "))

    if number % 2 == 0:
        print(f"{number} is even.")
    else:
        print(f"{number} is odd.")


#check_even_or_odd()


import math

def calculate_circle_area(radius):
    circle_area = math.pi * (radius ** 2)
    print(f"The area of the circle with a radius of {radius} is {circle_area:.2f}")

radius = float(input("Enter the radius of the circle: "))
#calculate_circle_area(radius)
