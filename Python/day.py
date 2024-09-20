day=int(input("Enter the day number: "))
match day:
    case 1:
        result = "Monday"
    case 2:
        result = "Tuesday"
    case 3:
        result = "Wednesday"
    case 4:
        result = "Thursday"
    case 5:
        result = "Friday"
    case 6:
        result = "Saturday"
    case 7:
        result = "Sunday"
    case _:
        result = "Invalid"
print(f"The day is {result}")
