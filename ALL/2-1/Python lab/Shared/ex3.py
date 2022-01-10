#ex3 Program that takes 2 values as command line argument and prints their sum
import sys
a = int(input(sys.argv[1]))
b = int(input(sys.argv[2]))
c = a + b
print(a,"+",b"=",c)