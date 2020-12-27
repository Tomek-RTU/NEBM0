parrot = "Norwegian Blue"

letter = input("Ievadiet simbolu: ")

if letter in parrot:
    print("{} ir iekšā vārda {}".format(letter, parrot))
else:
    print("Man nevajag to simbolu")