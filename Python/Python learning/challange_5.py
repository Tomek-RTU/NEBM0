location = {0: "You are sitting in front of the computer learning Python",
            1: "You are standing at the end of a toad before a small brick building",
            2: "You are at the top of a hill",
            3: "You are inside of a building, a well house for a small stream",
            4: "You are in a valley beside a stream",
            5: "You are in the forest"}

exits = {0: {"Q": 0},
         1: {"W": 2, "E": 3, "N": 5, "S": 4, "Q": 0},
         2: {"N": 5, "Q": 0},
         3: {"W": 1, "Q": 0},
         4: {"N": 5, "W": 2, "Q": 0},
         5: {"W": 2, "S": 1, "Q": 0} }

vocabulary = {"QUIT": "Q",
              "NORTH": "N",
              "SOUTH": "S",
              "EAST": "E",
              "WEST": "W"}

# print(location[0].split())
# print(location[3].split(","))
# print(' '.join(location[0].split()))

loc = 1
while True:
    availableExits = ", ".join(exits[loc].keys())
    # for direction in exits[loc].keys():
    #     availableExits += direction + ", "

    print(location[loc])

    if loc == 0:
        break

    direction = input("Available exits are " + availableExits).upper()
    print()
    # Parse the user input, using vocabulary dictionary if necessary
    if len(direction) > 1: # if more than one word, check vocab.
        words = direction.split()
        for word in words:
            if word in vocabulary:
                direction = vocabulary[word]
                break

    if direction in exits[loc]:
        loc = exits[loc][direction]
    else:
        print("You cannot go in that direction")
