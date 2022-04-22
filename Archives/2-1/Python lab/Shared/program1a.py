# Python program to enter two numbers and perform all arithmetic operations
print("Enter any two positive integer numbers:")

p, q = int(input()), int(input())
sum, sub, mul, mod, div = 0, 0, 0, 0, 0

sum = p + q
sub = p - q
mul = p * q
div = p / q
mod = p % q

print("\n")
print("SUM        ", p, " + ", q, " = ", sum)
print("DIFFERENCE ", p, " - ", q, " = ", sub)
print("PRODUCT    ", p, " * ", q, " = ", mul)
print("QUOTIENT   ", p, " / ", q, " = ", div)
print("MODULUS    ", p, " % ", q, " = ", mod)

"""
Output:
Enter any two positive integer numbers:
6
3


SUM         6  +  3  =  9
DIFFERENCE  6  -  3  =  3
PRODUCT     6  *  3  =  18
QUOTIENT    6  /  3  =  2.0
MODULUS     6  %  3  =  0
"""