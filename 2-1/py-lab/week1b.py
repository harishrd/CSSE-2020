""" 1.b) Write a python program to evaluate the following expressions
by reading necessary inputs from the keyboard.
i) ax2 + bx + c               ii) ax4 + bx2 + c
iii) (ax - b) / (ax * b)      iv) bekt """


#import math

a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
c=int(input("Enter the value of c: "))

x=int(input("Enter the value of x: "))
#k=int(input("Enter the value of k: "))
#t=int(input("Enter the value of t: "))

exp1=a*x**2+b*x+c
exp2=a*x**4+b*x**2+c
exp3=(a*x - b)/(a*x * b)
#a4=b*math.exp(k*t)

print("The value of a*x**2+b*x+c = ", exp1)
print("The value of a*x**4+b*x**2+c = ", exp2)
print("The value of (a*x - b)/(a*x * b) = ", exp3)
#print("The value of b*exp**k*t = ", exp4)
