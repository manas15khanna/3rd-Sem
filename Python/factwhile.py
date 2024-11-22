number = int(input("Enter a number: "))
if number < 0:
    print("Factorial does not exist for negative numbers.")
else:
    factorial = 1
    current = number
    while current > 0:
        factorial *= current
        current -= 1
    print(f"The factorial of {number} is {factorial}")
