# 9.b) Write a python program to perform following matrix operations using NumPy.      
# i) Dot product  ii) Matrix product     iii) Determinant       iv) Inverse 

import numpy as np

a = np.array([[1, 0],[0,1]])

b = np.array([[4, 1],[2, 2]])

print(np.matmul(a, b))

"""
Output:
[[4 1]
 [2 2]]
"""