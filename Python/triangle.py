a=int(input("Enter side 1 of triangle: "))
b=int(input("Enter side 2 of triangle: "))
c=int(input("Enter side 3 of triangle: "))
if a == b == c:
    print("Equilateral Triangle") 
elif a == b or b == c or c == a:
    print("Isosceles Triangle")
else:
    print("Scalene Triangle")
