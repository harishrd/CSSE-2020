# 4 c) Write a python program to sort n numbers without using a predefined function.   Sequences: Lists - operations, 
# comprehensions, nested lists, tuples, nested tuples, strings - operations, string handling methods, string formatting, 
# ictionaries - operations, diction array methods, sorting elements using lambdas.

# import 
print("Press x at the end")
L = []
c = input()
while(c != "x"):
	L.append(int(c))
	c = input()
for i in range(len(L)):
	for j in range(len(L)-i-1):
		if L[j] > L[j+1]:
			temp = L[j]
			L[j] = L[j+1]
			L[j+1] = temp
print(L)

"""
Press x at the end
7
3
9
1
4
8
x
[1, 3, 4, 7, 8, 9]

"""
