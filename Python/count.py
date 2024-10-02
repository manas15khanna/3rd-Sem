n=int(input("Enter the Number: "))
d=int(input("Enter the Digit: "))
count=0
while(n>0):
    if(n%10==d):
        count=count+1
    n=n//10
print(f"It appears {count} number of times")
