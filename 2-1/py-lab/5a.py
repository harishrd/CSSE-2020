students = dict()
n = int(input("Enter the number of students: "))
for i in range(n):
	print("Enter student details")
	sname = input("name: ")
	rollno = input("roll-number: ")
	branch = input("branch: ")
	marks = input("marks:")
	age = input("age: ")
	students[sname] = rollno, branch, marks, age
print("Created dictionary of students is: ", students)
print("after sorting: ", sorted(students.items()))
print("after sorting ", sorted(students.values()))

"""
Enter the number of students: 2
Enter student details
name: harish
roll-number: 566
branch: csse
marks:973
age: 19
Enter student details
name: bob
roll-number: 655
branch: ece
marks:958
age: 20
Created dictionary of students is:  {'bob': ('655', 'ece', '958', '20'), 'harish': ('566', 'csse', '973', '19')}
after sorting:  [('bob', ('655', 'ece', '958', '20')), ('harish', ('566', 'csse', '973', '19'))]
after sorting  [('566', 'csse', '973', '19'), ('655', 'ece', '958', '20')]
                                  
"""