start = int(input("Enter the starting number of the range: "))
end = int(input("Enter the ending number of the range: "))
total_sum = 0
count = 0
for number in range(start, end + 1):
    total_sum += number
    count += 1
average = total_sum / count if count > 0 else 0
print(f"Sum of numbers from {start} to {end} is: {total_sum}")
print(f"Average of numbers from {start} to {end} is: {average}")
