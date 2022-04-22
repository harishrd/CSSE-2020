# 3) a) Write a python program that computes amount payable after discount from the price and quantity. The discount on amount is as follows:  
# i) No discount when the amount less than or equal to 2000. 
# ii) 5% discount when the amount exceeds 2000. 
# iii) 10% discount when the amount exceeds 5000. 
# iv) 15% discount when the amount exceeds 10000.

amt = int(input("Enter Sale Amount: "))

# checking conditions and calculating discount
if(amt > 0) :
    if amt <= 2000 :
       disc = 0
    elif amt <= 5000 :
        disc = amt*0.05
    elif amt <= 10000 :
        disc = 0.1 * amt
    else:
         disc = 0.15 * amt

    print("Discount : ", disc)
    print("Net Pay  : ", amt-disc)
else:
    print("Invalid Amount")

# OUTPUT
# Enter Sale Amount: 7000
# Discount :  700.0
# Net Pay  :  6300.0