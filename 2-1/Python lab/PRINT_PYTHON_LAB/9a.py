# 9) a) Write a python program to perform arithmetic operations on NumPy arrays

from numpy import *

arr = array([10,20,30])

print("Original array:", arr)
print("After adding 5:", arr+5)
print("After subtracting by 5:", arr-5)
print("After multiplying with 5:", arr*5)
print("After dividing with 5:", arr/5)

"""
Output:
Original array: [10 20 30]
After adding 5: [15 25 35]
After subtracting by 5: [ 5 15 25]
After multiplying with 5: [ 50 100 150]
After dividing with 5: [2. 4. 6.]
"""