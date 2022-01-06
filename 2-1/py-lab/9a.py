import numpy as np

arr = np.array([[5,10],[15, 20]])
#add 10 to element values
print("Adding 10:\n" + repr( arr + 10))

#multiply elements by 5
print("Multiplying by 5:\n" + repr(arr * 5))

#subtract 5 from elements
print("Subtracting 5:\n" + repr(arr - 5))

#Matrix multiplication
arr1 = np.array([[-8,7], [17, 20], [8,16], [11,4]])
arr2 = np.array([[5,-5,10,20], [-8,0,13,2]])
print("Multiplying two arrays:\n" + repr(np.matmul(arr1,arr2)))

#Exponential
arr3 = np.array([[1,5], [2.5,2]])
#expponential of each element
print("Taking the exponential:\n" + repr(np.exp(arr3)))
                                              
#cubing all elements
print("cubing each element :\n" + repr(np.power(3, arr3)))

"""
Output:

Adding 10:
array([[15, 20],
       [25, 30]])
Multiplying by 5:
array([[ 25,  50],
       [ 75, 100]])
Subtracting 5:
array([[ 0,  5],
       [10, 15]])
Multiplying two arrays:
array([[ -96,   40,   11, -146],
       [ -75,  -85,  430,  380],
       [ -88,  -40,  288,  192],
       [  23,  -55,  162,  228]])
Taking the exponential:
array([[  2.71828183, 148.4131591 ],
       [ 12.18249396,   7.3890561 ]])
cubing each element :
array([[  3.        , 243.        ],
       [ 15.58845727,   9.        ]])
"""
