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