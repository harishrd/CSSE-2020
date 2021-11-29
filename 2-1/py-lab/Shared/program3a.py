# input sale amount
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