sum=0
for x in range(1,100):
    if(x%7==0):
       sum=sum+x
    else:
        x+=1 
print(f"The sum is: {sum}")
