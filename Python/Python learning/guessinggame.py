answer = 5

print("Lūdzu uzzminiet skaitli no 1 līdz 10: ")
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

# if guess < answer:
#     print("Lūdzu nosauciet citu skaitli")
#     guess = int(input())
#     if guess == answer:
#         print("Malcis, Tu uzminēji")
#     else:
#         print("Piedod, Tu neesi uzminējis")
# elif guess > answer:
#     print("Lūdzu nosauciet mazāku skaitli")
#     guess = int(input())
#     if guess == answer:
#         print("Malacis, Tu uzminēji")
#     else:
#         print("Piedod, Tu neesi uzminējis")
# else:
#     print("Jūs uzminējāt pareizi")

# x = 5
# y = 7
# if x > y:
#     print("x is greater than y")
# elif x < y:
#     print("x is smallers than y")
# else:
#     print("x equels y")
