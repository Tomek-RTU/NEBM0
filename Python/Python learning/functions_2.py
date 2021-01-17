def is_palindrome(string):
    """
Check if a string is a palindrome.

A palindrome is a string that reads the same forwards as backwards.

:param string: The string to check.
:return: True if `string` is a palindrome, False otherwise.
"""
    # backwards = string[::-1]
    # return backwards == string
    return string[::-1].casefold() == string.casefold()


def palindrome_sentence(sentence):
    """
Check if a sentence is a palindrome.

The function ignores whitespace, capitalisation and
punctuation in the sentence.

:param sentence: The sentence to check.
:return: True if `sentence` is a palindrome, False otherwise.
"""
    string = ""
    for char in sentence:
        if char.isalnum():
            string += char
    print(string)
    # return string[::-1].casefold() == string.casefold()
    return is_palindrome(string)

word = input("Please enter a word to check: ")
if palindrome_sentence(word):
    print("'{}' is a palindrome". format(word))
else:
    print("'{}' is NOT a palindrome".format(word))