from math import sqrt
# fn to check if a number is a perfect square or not
def isPerfectSquare(n):
	if()






def fib(n):
    if(n >=0 ):
        sr1 = sqrt(5*n*n + 4)
        sr2 = sqrt(5*n*n - 4)
        if (sr1 * sr1 == float(n)) or (sr2 * sr2 == float(n)) :
            return 1
        else:
            return 0
        
n = int(input("Enter a integer number: "))
if fib(n):
    print(n , "is a fibonacci number.")
else:
    print(n , "is a not fibonacci number.")
