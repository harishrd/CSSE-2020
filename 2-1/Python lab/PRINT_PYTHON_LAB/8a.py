# 8) a) Write a python function to perform the sum of integers that are sent to a function as variable length arguments.  

def sum(*args):
    result = args[0]
    a = 0
    for num in args:
        a+=num
    return a


"""
Output:
>>> sum(1,4,6)
11

>>> sum(9,12)
21
"""
