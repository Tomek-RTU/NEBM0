print("Please choose your option from the list below: ")
print("1:\tSniper")
print("2:\tEOD")
print("3:\tJTAC")
print("4:\tPJ")
print("5:\tDiver")
print("0:\tExit")

while True:
    choice = input()

    if choice == "0":
        print("You chose to Exit!")
        break
    elif choice in "12345":
        print("You chose {}".format(choice))
    else:
        print("Please choose your option from the list below: ")
        print("1:\tSniper")
        print("2:\tEOD")
        print("3:\tJTAC")
        print("4:\tPJ")
        print("5:\tDiver")
        print("0:\tExit")

# choice = "-"
# while choice != "0":
#     if choice in "12345":
#         print("You chose {}".format(choice))
#     else:
#         print("Please choose your option from the list below: ")
#         print("1:\tSniper")
#         print("2:\tEOD")
#         print("3:\tJTAC")
#         print("4:\tPJ")
#         print("5:\tDiver")
#         print("0:\tExit")
#     choice = input()
