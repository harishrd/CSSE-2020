n = int(input("enter length of the list: "))
List1 = []
print("enter the elements: ")
for i in range(n):
	elements = input()
	List1.append(elements)
print("list of elements are: ", List1)
st = []
for i in List1:
	if i not in st:
		st.append(i)
print("after deleting duplicates the values are: ", st)

"""
length of the list: 5
enter the elements: 
3
b
7
3
b
list of elements are:  ['3', 'b', '7', '3', 'b']
after deleting duplicates the values are:  ['3', 'b', '7']

"""