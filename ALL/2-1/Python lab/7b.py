# 7.b) Write a python program to generate a dictionary that contains numbers between 1 and n in the form (x, x+x)

number = int(input("Enter the number: "))
myDict = {x:x+x for x in range(1, number+1)}
print(myDict)

"""
Output:
Enter the number: 4
{1: 2, 2: 4, 3: 6, 4: 8}

"""
