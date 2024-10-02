num= int(input("Enter any number: "))
max=num
min=num 
while(num!=''):
    num=(input("Enter number: or leave empty for end: "))
    if num!='':
        num=int(num)
        if num < min:
            min=num
        if num > max:
            max=num 

print(f"The sum of smallest and largest is: {max+min}")
