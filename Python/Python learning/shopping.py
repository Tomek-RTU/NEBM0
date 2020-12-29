shopping_list = ["milk", "pasta", "eggs", "spam", "bread", "rice"]

# for item in shopping_list:
#     if item != "spam": #izņemot spam
#         print("Buy " + item)
#
# #for item in shopping_list:
#     print("Buy " + item)

# for item in shopping_list:
#     if item == "spam":
#         continue
#
#     print("Buy " + item)

for item in shopping_list:
    if item == "spam":
        break

    print("Buy " + item)