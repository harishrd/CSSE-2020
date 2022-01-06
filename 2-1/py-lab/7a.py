
lst = []
n = int(input("Enter the number of elements: "))
for i in range(0,n):
    ele = [input(),int(input()), int(input())]
    lst.append(ele)
my_dic = {i:lst[i] for i in range(len(lst))}
print(my_dic)
