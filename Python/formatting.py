for i in range(1, 13):
    print("Skaitlis {0:2} kvadrātā ir {1:3} un kubā ir {2:4}".format(i, i ** 2, i ** 3)) #Pakāpes un atstarpes
print()

for i in range(1, 13):
    print("Skaitlis {0:2} kvadrātā ir {1:<3} un kubā ir {2:<4}".format(i, i ** 2, i ** 3))

print()

print("Pī ir aptuveni {0:12}".format(22 / 7))
print("Pī ir aptuveni {0:12f}".format(22 / 7))
print("Pī ir aptuveni {0:12.3f}".format(22 / 7))
print("Pī ir aptuveni {0:<52.50f}".format(22 / 7))
print("Pī ir aptuveni {0:<62.50f}".format(22 / 7)) #<
print("Pī ir aptuveni {0:72.50f}".format(22 / 7))
