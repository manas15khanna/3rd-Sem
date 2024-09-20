#monthly sales, 10 percent if more than 500000, otherwise 0 
sale=int(input("Enter sales"))
bonus=0
if(sale<0):
    print("Error")
elif sale>500000:
    bonus=sale*10/100
elif sale<500000:
    bonus=sale*5/100
else:
    bonus=0
print("Bonus="+str(bonus))
