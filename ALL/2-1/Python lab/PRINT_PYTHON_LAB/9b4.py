# 9.b) Write a python program to perform following matrix operations using NumPy.      
#iv) Inverse 

import numpy as np
#taking a 3*3 matrix
A = np.array([[6,1,1],[4, -2, 5], [2, 8, 7]])
#Calculating the inverse of the matrix
print(np.linalg.inv(A))

"""
Output:

[[ 0.17647059 -0.00326797 -0.02287582]
 [ 0.05882353 -0.13071895  0.08496732]
 [-0.11764706  0.1503268   0.05228758]]
 
"""
