empty_list = []
even = [2, 4, 6, 8]
odd = [1, 3, 5, 7, 9]

numbers = even + odd
print(numbers)

sorted_numbers = sorted(numbers)
print(sorted_numbers)

digits = sorted("432985617") # char!
print(digits)

# more_numbers = list(numbers)
# more_numbers = numbers[:]
more_numbers = numbers.copy()
print(more_numbers)
print(numbers is more_numbers)
print(numbers == more_numbers)

# print(min(even))
# print(max(even))
# print(min(odd))
# print(max(odd))
#
# print()
# print(len(even))
# print(len(odd))
# print()
# print("mississippi".count("s"))
# print("mississippi".count("iss"))

# even.extend(odd)
# print(even)
#
# another_even = even
# print(another_even)
#
# even.sort()
# # even.sort(reverse=True)
# print(even)
# print(another_even)