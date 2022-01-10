# #7) a) Write a python program to read n number of 
# student details into nested list and convert that as a
# nested dictionary.

lst = []
n = int(input("Enter the number of elements: "))
for i in range(0,n):
    ele = [input(),int(input()), int(input())]
    lst.append(ele)
my_dic = {i:lst[i] for i in range(len(lst))}
print(my_dic)

"""
Output:
Enter the number of elements: 2
Harish
20
40
Bob
30
50
{0: ['Harish', 20, 40], 1: ['Bob', 30, 50]}
"""