# parrot = "Norwegian Blue"
#
# for character in parrot:
#     print(character)

#number = "9,223;372:036 854,775;807"
#seperators = number[1::4]
number = input("Lūdzu, ievadiet skaitļus ar pietur zīmēm: ")
separators = ""
for char in number:
    if not char.isnumeric():
        separators = separators + char

# print(separators)

values = "".join(char if char not in separators else " " for char in number).split()
print(sum([int(val) for val in values]))
#######################################################################################################################
print()
quote = """
Alright, but apart from the Sanitation, the Medicine, Education, Wine,
Public Order, Irrigation, Roads, the Fresh-Water System,
and Public Health, what have the Romans ever done for us?
"""

# Use a for loop and an if statement to print just the capitals in the quote above.
for char in quote:
    if char in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
        print(char)
#for char in quote:
#     if char.isupper():
#         print(char)