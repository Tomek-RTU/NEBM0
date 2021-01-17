# jabber = open("/Users/Toms/Downloads/sample_IO.txt", 'r')
#
# # for line in jabber:
# #     print(line)
#
# for line in jabber:
#     if "jabberwock" in line.lower():
#         print(line, end='')
#
#
# jabber.close()  # Vienmēr .close vajag taisīt

# with open("/Users/Toms/Downloads/sample_IO.txt", 'r') as jabber:
#     for line in jabber:
#         if "JAB" in line.upper():
#             print(line, end='')

# with open("/Users/Toms/Downloads/sample_IO.txt", 'r') as jabber:
#     line = jabber.readline()
#     while line:
#         print(line, end='')
#         line = jabber.readline()

# with open("/Users/Toms/Downloads/sample_IO.txt", 'r') as jabber:
#     lines = jabber.readlines()
# print(lines)
#
# for line in lines:
#     print(line, end='')

with open("/Users/Toms/Downloads/sample_IO.txt", 'r') as jabber:
    lines = jabber.readlines()
print(lines)

for line in lines[::-1]:
    print(line, end='')

with open("/Users/Toms/Downloads/sample_IO.txt", 'r') as jabber:
    lines = jabber.read()
print(lines)

for line in lines[::-1]:
    print(line, end='')