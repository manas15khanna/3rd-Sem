# Input range from the user
start = int(input("Enter the starting number of the range: "))
end = int(input("Enter the ending number of the range: "))
total_sum = 0
count = 0
current = start

while current <= end:
    total_sum += current
    count += 1
    current += 1

average = total_sum / count if count > 0 else 0

print(f"Sum of numbers from {start} to {end} is: {total_sum}")
print(f"Average of numbers from {start} to {end} is: {average}")
