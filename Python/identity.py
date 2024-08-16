a=50
b=a 
print(id(a)) 
#691168
print(id(b)) 
#691168
# Reassigned variable `a' 
a=500 
print(id(a)) 
#262205
