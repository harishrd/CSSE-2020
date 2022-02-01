# 12) a) Draw a Scatter Plot by considering an appropriate data set.
#Plotting scatter plot by reading data from an external file

#import matplotlib.pyplot as plt

with open('data.txt', 'r') as f:
    contents = f.readlines()
    print(contents)

