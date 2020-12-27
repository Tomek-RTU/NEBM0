name = input("Please enter your name: ")
#age = input("How old are you, {0}? ".format(name))
age = int(input("How old are you, {0}? ".format(name)))
print(age)

# if age >= 18:
#     print("You are old enough to vote") # 'Ctrl + /'
#     print("Please put X in the box")
# else:
#     print("Come back in {0} years". format(18 - age))

if age < 18:
    print("Come back in {0} years".format(18 - age)) #tas pats kas augšā
elif age == 900: # '==' nozīmē vienāds
    print("Sorry, Joda, you die in Return of the Jedi")
else:
    print("You are old enough to vote")
    print("Please put X in the box")

