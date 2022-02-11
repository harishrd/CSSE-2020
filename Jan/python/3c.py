# 3.c) Write a python program to print the following pattern.      
# 	  1        
#   1 2 1      
# 1 2 3 2 1      
#   1 2 1        
# 	  1

row = int(input('Enter the number pattern: '))
c = row//2
for i in range(1,row+1):
	if i<=(row//2 + 1):
		#for space
		for j in range(1, row+1-i):
			print(' ',end=' ')

		#for increasing pattern
		for j in range(1,i+1):
			print(j,end=' ')

		#for decreasing pattern
		for j in range(i-1,0,-1):
			print(j, end=' ')
	else:
		for j in range(j,i):
			print(' ', end=' ')

		#for increasing pattern
		for j in range(1,c):
			print(j, end=' ')

		#for decreasing pattern
		for j in range(c,0,-1):
			print(j, end=' ')
		c-=1

	#moving to next line
	print()

# Output:
# Enter the number pattern: 5
#             1  
#          1  2  1  
#       1  2  3  2  1  
#          1  2  1  
#             1  

# Enter the number pattern: 9
#                         1  
#                      1  2  1  
#                   1  2  3  2  1  
#                1  2  3  4  3  2  1  
#             1  2  3  4  5  4  3  2  1  
#                1  2  3  4  3  2  1  
#                   1  2  3  2  1  
#                      1  2  1  
#                         1  