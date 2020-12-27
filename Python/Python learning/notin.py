# activity = input("Ko tu gribētu šodien darīt? ")
#
# if "kino" not in activity.casefold(): #.casefold priekš upper un lowercase burtiem!
#     print("Bet es gribu iet uz kino!")

name = input("Kā Tevi sauc? ")
age = int(input("Cik Tev gadi, {0}? ".format(name)))

#if age > 18 and age < 31:
if 18 <= age < 31:
    print("Laipni lūgti, {0}!".format(name))
else:
    print("Lūdzu vācieties prom, {0}!".format(name))
