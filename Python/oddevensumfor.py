# Input range from the user
lower = int(input("Enter the lower limit: "))
upper = int(input("Enter the upper limit: "))

# Ensure the range is valid
if lower > upper:
    print("Invalid range. Lower limit must be less than or equal to the upper limit.")
else:
    even_sum = 0
    odd_sum = 0

    for number in range(lower, upper + 1):
        if number % 2 == 0:
            even_sum += number
        else:
            odd_sum += number

    print(f"Sum of even numbers between {lower} and {upper}: {even_sum}")
    print(f"Sum of odd numbers between {lower} and {upper}: {odd_sum}")
