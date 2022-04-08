# 6)  Write a python program to implement the following conversions:            
# i) Binary to Decimal 

print("Enter the binary number")
bnum = int(input())
dnum = 0
i = 1
while bnum != 0:
    rem = bnum % 10
    dnum = dnum + rem*i
    i = i*2
    bnum = int(bnum/10)
print("Equivalent decimal value = ", dnum)

"""
Output:

Enter the binary number
101010
Equivalent decimal value =  42

Enter the binary number
1101
Equivalent decimal value =  13
"""