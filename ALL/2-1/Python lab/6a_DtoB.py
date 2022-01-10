
# 6)  Write a python program to implement the following conversions:            
# i) Decimal to Binary 

decimal = int(input("Enter a decimal number: "))
binary = 0
ctr = 0
temp = decimal
while(temp>0):
    rem = temp % 2
    binary = rem * (10**ctr) + binary
    temp = int(temp/2)
    ctr += 1
print("Binary of {x} is = {y}".format(x=decimal, y=binary))

"""
Output:
Enter a decimal number: 42
Binary of 42 is = 101010
Enter a decimal number: 9
Binary of 9 is = 1001

"""
