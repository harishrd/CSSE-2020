# ex2 Program to calculate the distance between two points
import math

x1 = int(input("Enter x1 value: "))
y1 = int(input("Enter y1 value: "))
x2 = int(input("Enter x2 value: "))
y2 = int(input("Enter y2 value: "))

dist = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
print("The distance between the two points is", dist)

# OUTPUT
# Enter x1 value: 4
# Enter y1 value: 5
# Enter x2 value: 5
# Enter y2 value: 6
# The distance between the two points is 1.4142135623730951