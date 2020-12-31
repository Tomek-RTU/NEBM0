low = 1
high = 1000

print("Lūdzu, nosauciet skaitli no {} un {}".format(low, high))
input("Nospiediet ENTER, lai sāktu")

guesses = 1
while low != high:
    # print("\tMinēt skaitli no {} līdz {}".format(low, high))
    guess = low + (high - low) // 2
    high_low = input(
        "Mans minējums ir {}. Vai man vajadzētu minēt augstāk vai zemāk? Ievadi"
        " h vai l, vai c, ja mans minējums bija pareizs ".format(
            guess)).casefold()

    if high_low == "h":
        low = guess + 1
        # pass #'pass' ir lai nedabūtu error
    elif high_low == "l":
        high = guess - 1
    elif high_low == "c":
        print("Es uzminēju ar {} piegājieniem!".format(guesses))
        break
    else:
        print("Lūdzu, ievadiet h, l vai c.")
    # guesses = guesses + 1
    guesses += 1
else:
    print("Es uzminēju skaitli {}".format(low))
    print("Es to uzminēju ar {} piegājieniem".format(guesses))
