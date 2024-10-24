list1=[]
while True:
    a=int(input("Enter any number: "))
    if(a==0):
        break 
    else:
        list1.append(a) 
print(list1)
list1.sort()
print(list1)
