# 8.b) Write a python program to implement the following using recursion:             
# i) GCD of two numbers

def gcd(a,b):
	if(b==0):
		return a
	else:
		return gcd(b, a%b)
a = int(input("Enter first number: "))
b = int(input("Enter first number: "))
GCD = gcd(a,b)
print("GCD is : ")
print(GCD)

"""
Output:
Enter first number: 98
Enter first number: 34
GCD is : 
2

"""
