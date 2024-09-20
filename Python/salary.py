#monthly salary, 10 percent if more than 50000, otherwise 0 
bonus=0
sale=int(input("Enter sales"))
if sale>50000:
    bonus=sale*10/100
print("Bonus="+str(bonus))
