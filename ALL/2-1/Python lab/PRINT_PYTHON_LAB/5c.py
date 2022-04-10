# 5. c) Write a python program to count the occurrences of each word in a given string. 

def word_count(str):
	counts = dict()
	words = str.split()
	for word in words:
		if word in counts:
			counts[word] += 1
		else:
			counts[word] = 1
	return counts

string = input("Enter the string: ")
print(word_count(string))

"""
Output:

Enter the string: hi hello hi there
{'hi': 2, 'hello': 1, 'there': 1}

"""
