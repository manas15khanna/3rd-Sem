x=input("Enter a string: ")
w=''
for i in x:
    w=i+w 
if(x==w):
    print(f"{x} is a Palindrome")
else:
    print("Not a Palindrome")
