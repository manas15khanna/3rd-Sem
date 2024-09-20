# Enter radius and height of the cylinder and calculate the volume
import math

radius = float(input("Enter the radius of the cylinder: "))
height = float(input("Enter the height of the cylinder: "))
volume_cylinder = math.pi * radius ** 2 * height
print(f"The volume of the cylinder is: {volume_cylinder:.2f}")
