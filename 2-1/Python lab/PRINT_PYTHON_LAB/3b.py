# 3.b) Write a python program to find he largest among three numbers using nested if else.

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
num3 = float(input("Enter third number: "))

if (num1 > num2) and (num1 > num3):
    largest = num1
elif (num2 > num1) and (num2> num3):
    largest = num2
else:
    largest = num3

print("The largest number is:", largest)

"""
OUTPUT
Enter first number: 12
Enter second number: 23
Enter third number: 7
The largest number is: 23.0
""''