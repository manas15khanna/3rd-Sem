bill_amount = float(input("Enter the bill amount: "))
payment_mode = input("Enter the payment mode (Credit Card / Debit Card / Net Banking): ")
discount = 0.0
if payment_mode.lower() == "credit card":
  discount = 0.10
  print("You received a 10% discount for using a Credit Card.")
elif payment_mode.lower() == "debit card":
  discount = 0.05
  print("You received a 5% discount for using a Debit Card.")
elif payment_mode.lower() == "net banking":
  discount = 0.02
  print("You received a 2% discount for using Net Banking.")
else:
  print("No discount applied.")
final_amount = bill_amount * (1 - discount)
print(f"The final bill amount after discount is: {final_amount:.2f}")
