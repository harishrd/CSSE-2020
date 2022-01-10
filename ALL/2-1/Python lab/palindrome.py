n = int(input("Enter the number: "))
rem = 0
temp = n
while(n!=0):
    r = n%10
    rem = rem * 10 + r
    n = n//10
print("The reverse of the number is ", rem)
if(temp == rem):
    print("It is a palindrome")
else:
    print("Not a palindrome")
