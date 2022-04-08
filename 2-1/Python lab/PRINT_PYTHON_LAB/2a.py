# 2) a) Write a python program to swap two variable values without using a third variable. 

x = 5
y = 10

x = x + y
y = x - y
x = x - y
print("x =", x)
print("y =", y)

"""
Output:
x = 10
y = 5
"""

x = 5
y = 10

x, y = y, x
print("x =", x)
print("y =", y)
"""
Output:
x = 10
y = 5
"""