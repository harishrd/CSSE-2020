# 4a Program to check if the given number is a fibonacci number or not

n = int(input("Enter any number: "))
a = 0
b = 1
c = 0
if n == 0 or n == 1:
	print("fibonacci number")
else:
	while c < n:
		c = a + b
		a = b
		b = c
	if c == n:
		print("fibonacci number")
	else:
		print("not a fibonacci number")
"""
Output:
Enter any number: 65
not a fibonacci number

----------------
Enter any number: 55
fibonacci number
"""