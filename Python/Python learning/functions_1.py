def python_food():
    width = 80
    text = "Spam and eggs"
    left_margin = (width - len(text)) // 2
    print(" " * left_margin, text)


def center_text(*args, sep=' '):
    text = ""
    for arg in args:
        text += str(arg) + sep
    left_margin = (80 - len(text)) // 2
    return " " * left_margin + text


# with open("centered", mode='w') as centred_file:
# Call the function
# s1 = (center_text("Spam and eggs"))
# print(s1)
# s2 = (center_text("Spam, spam and eggs"))
# print(s2)
# print(center_text("Spam, spam, spam, spam and eggs"))
# print(center_text("first", "second", 3, 4, "spam", sep=":"))

with open("menu", "w") as menu:
    s1 = (center_text("Spam and eggs"))
    print(s1, file=menu)
    s2 = (center_text("Spam, spam and eggs"))
    print(s2, file=menu)
    print(center_text("Spam, spam, spam, spam and eggs"), file=menu)
    print(center_text("first", "second", 3, 4, "spam", sep=":"), file=menu)

print("=" + str(12 + 3))
print(sorted(["b", "d", "f"]))
