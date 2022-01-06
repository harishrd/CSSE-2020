number = int(input("Enter the number: "))
myDict = {x:x+x for x in range(1, number+1)}
print(myDict)
