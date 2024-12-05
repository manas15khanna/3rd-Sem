lower = int(input("Enter the lower limit: "))
upper = int(input("Enter the upper limit: "))
if lower > upper:
    print("Invalid range. Lower limit must be less than or equal to the upper limit.")
else:
    even_sum = 0
    odd_sum = 0
    current = lower

    while current <= upper:
        if current % 2 == 0:
            even_sum += current
        else:
            odd_sum += current
        current += 1
    print(f"Sum of even numbers between {lower} and {upper}: {even_sum}")
    print(f"Sum of odd numbers between {lower} and {upper}: {odd_sum}")
