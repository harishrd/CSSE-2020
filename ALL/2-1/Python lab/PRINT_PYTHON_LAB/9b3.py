# 9.b) Write a python program to perform following matrix operations using NumPy.      
# iii) Determinant 
import numpy as np
#creating a 2*2 numpy matrix

n_array = np.array([[50, 29], [30, 44]])

#displaying the matrix
print("Numpy matrix is: ")
print(n_array)

#calculating the determinent of matrix
det = np.linalg.det(n_array)

print("\nDeterminent of given 2*2 matrix:")
print(int(det))

"""
OUtput:
Numpy matrix is: 
[[50 29]
 [30 44]]

Determinent of given 2*2 matrix:
1330

"""

