# Python program to evaluate the arithmetic expression
print("Enter the values of a,b,c and x :")

a, b, c, x, e, k, t = int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input())
R1 = 0
R2 = 0
R3 = 0
R4 = 0
R1 = (a*(x**2)+b*x+c)
R2 = (a*(x**4)+b*(x**2)+c)
R3 = (a*x-b)/(a*x+b)
R4 = (b*(e**(k*t)))
print(R1)
print(R2)
print(R3)
print(R4)


