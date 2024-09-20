name=input("Enter Name of Student: ")
a=int(input("Enter marks for subject 1: "))
b=int(input("Enter marks for subject 2: "))
c=int(input("Enter marks for subject 3: "))
d=int(input("Enter marks for subject 4: "))
e=int(input("Enter marks for subject 5: "))
total=a+b+c+d+e
percent=total/5
if(percent>=60):
    print("First Grade")
elif(percent<33):
    print("Third Grade")
else:
    print("Second Grade")
