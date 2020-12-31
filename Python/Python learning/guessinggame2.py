import random

highest = 10
answer = random.randint(1, highest)

print("Lūdzu uzzminiet skaitli no 1 līdz {}: ".format(highest))
guess = int(input())

if guess != answer:
    if guess < answer:
        print("Lūdzu, miniet lielāku skaitli")
    else: #guess jābūt lielākam nekā answer
        print("Lūdzu miniet mazāku skaitli")
    guess = int(input())
    if guess == answer:
        print("Malacis, Tu uzminēji")
    else:
        print("Piedod, Tu neesi uzminējis")
else:
    print("Malacis, Tu uzminēji ar pirmo reizi!")