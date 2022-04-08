# 8.b) Write a python program to implement the following using recursion:             
# ii) Towers of Hanoi problem.

def TowerOfHanoi(disks, source, auxiliary, destination):  

    if(disks == 1):  
        print('Move disk 1 from rod {} to rod {}.'.format(source, destination))  
        return  

    TowerOfHanoi(disks - 1, source, destination, auxiliary)  

    print('Move disk {} from rod {} to rod {}.'.format(disks, source, destination)) 
     
    TowerOfHanoi(disks - 1, auxiliary, source, destination)

disks = int(input('Enter the number of disks: '))
TowerOfHanoi(disks, 'A', 'B', 'C')

"""
Output:

Enter the number of disks: 3
Move disk 1 from rod A to rod C
Move disk 2 from rod A to rod B
Move disk 1 from rod C to rod B
Move disk 3 from rod A to rod C
Move disk 1 from rod B to rod A
Move disk 2 from rod B to rod C
Move disk 1 from rod A to rod C
"""