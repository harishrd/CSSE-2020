# 4b Program to find whether a given number is Armstrong number or not

n1 = int(input("Enter the lowest number: "))
n2 = int(input("Enter the highest number: "))

for num in range(n1, n2+1):
	order = len(str(num))
	sum = 0
	temp = num
	while temp > 0:
		value = temp % 10
		sum = sum + value**order
		temp = int(temp / 10)
	if sum == num:
		print(num)
"""
Output:
Enter the lowest number: 10
Enter the highest number: 1000
153
370
371
407
"""