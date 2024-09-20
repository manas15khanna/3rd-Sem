# Formula: A = P * (1 + r/n)^(n*t)
principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the rate of interest (in %): "))
time = float(input("Enter the time period (in years): "))
compounding_frequency = int(input("Enter the number of times interest is compounded per year: "))

rate = rate / 100

amount = principal * (1 + rate / compounding_frequency) ** (compounding_frequency * time)
compound_interest = amount - principal

print(f"The Compound Interest is: {compound_interest:.2f}")
print(f"The total amount after {time} years is: {amount:.2f}")
