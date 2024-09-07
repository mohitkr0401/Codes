print("1. From Fahrenheit to Celsius")
print("2. 1. Fr0m Celsius to Fahrenheit")
choice = int(input("Enter Your choice: "))
if choice == 1:
    temp = float(input("Enter the Temperature in Fahrenheit: "))
    new_temp = (temp - 32) *5/9
    print("Temperature in Celsius is: " + new_temp)
elif choice == 2:
    temp = float(input("Enter the Temperature in Celsius: "))
    new_temp = (temp* 9/5) + 32
    print("Temperature in Fahrenheit is: " + new_temp)
else:
    print("Invalid Choice!!")