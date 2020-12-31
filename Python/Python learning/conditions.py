age = int(input("Cik Tev gadi? "))

# if age >= 16 and age <= 65:
# if 16 <= age <= 65:
if age in range(16, 66):
    print("Lai Tev jauka diena")
else:
    print("Izbaudi savu laiku")

print("-" * 80)

if age < 16 or age > 65:
    print("Izbaudi savu brīvo laiku 2")
else:
    print("Lai Tev jauka diena")
