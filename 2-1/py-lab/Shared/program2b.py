# 2.b python program for reading multiple inputs with comma
R1, R2, R3, R4 = map(int, input("Enter four numbers: ").split(","))
print("The value of R1 is ", R1)
print("the value of R2 is ", R2)
print("the value of R3 is ", R3)
print("the value of R4 is ", R4)
additon = R1 + R2 + R3 + R4
print("The sum is", additon) 