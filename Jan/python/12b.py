# 12.b) Draw histograms by considering an appropriate data set. 
# source: Core Python Programming (pg:710)
#histogramof employee ages
import matplotlib.pyplot as plt

#take individual employee ages and range of ages
emp_ages = [22,45,30,59,58,56,57,45,43,43,50,40,34,33,25,19]
bins = [0,10,20,30,40,50,60]

#create histogramof bar type
plt.hist(emp_ages, bins, histtype='bar', rwidth=0.8, color='cyan')

#set labels
plt.xlabel('employee ages')
plt.ylabel('no. of employees')
plt.title('ORACLE CORP')
plt.legend(xlabel, ylabel)

#draw the histogram
plt.show()