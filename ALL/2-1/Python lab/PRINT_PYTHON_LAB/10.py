# 10)  Write a python program that works as a scientific calculator using functions.

import math

print("""
press-
1 - addition(x,y)
2 - subtraction(x,y)
3 - multiplication(x,y)
4 - division(x,y)
5 - exponent(x,y)
6 - tan(x)
7 - sin(x)
8 - cos(x)
9 - factorial(x)
10 - log(x)
""")

#use a while loop
o = input("")

if o == "1":
	x = int(input("1st number: "))
	y = int(input("2nd number: "))
	print(x+y)

elif o == "2":
	x = int(input("1st number: "))
	y = int(input("2nd number: "))
	print(x-y)

elif o == "3":
	x = int(input("1st number: "))
	y = int(input("2nd number: "))
	print(x*y)

elif o == "4":
	x = int(input("1st number: "))
	y = int(input("2nd number: "))
	print(x/y)

elif o == "5":
	x = int(input("1st number: "))
	y = int(input("2nd number: "))
	print(x**y)

elif o == "6":
	x = int(input("Enter the number: "))
	print(math.tan(x))

elif o == "7":
	x = int(input("Enter the number: "))
	print(math.sin(x))

elif o == "8":
	x = int(input("Enter the number: "))
	print(math.cos(x))

elif o == "9":
	x = int(input("Enter the number: "))
	print(math.factorial(x))

elif o == "10":
	x = int(input("Enter the number: "))
	print(math.log(x))

"""
Output:

press-
1 - addition(x,y)
2 - subtraction(x,y)
3 - multiplication(x,y)
4 - division(x,y)
5 - exponent(x,y)
6 - tan(x)
7 - sin(x)
8 - cos(x)
9 - factorial(x)
10 - log(x)

5
1st number: 4
2nd number: 6
4096

"""
