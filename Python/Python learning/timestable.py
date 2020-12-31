# for i in range(1, 13):
#     for j in range(1, 13):
#         print("{0}j time {1}i is {2}j*i".format(j, i, i * j))
#     print("-----------")

# using continue
for x in range(21):
    if x % 3 == 0 or x % 5 == 0:
        continue
    print(x)

# without continue
# for x in range(21):
#     if x % 3 != 0 and x % 5 != 0:
#         print(x)
