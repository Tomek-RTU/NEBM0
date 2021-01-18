import shelve

with shelve.open("bike") as bike:
    bike["make"] = "Honda"
    bike["model"] = "250 Dream"
    bike["colour"] = "red"
    bike["engine_size"] = 250
    for key in bike:
        print(key)

    print("-" * 50)

    print(bike["engine_size"])
    print(bike["colour"])