# 47.	Write a program that accepts a sentence and calculate the number of letters and digits. Store the result in a dictionary.
def count_letters_and_digits(sentence):
    letter_count = 0
    digit_count = 0

    for char in sentence:
        if char.isalpha():
            letter_count += 1
        elif char.isdigit():
            digit_count += 1

    result = {"letters": letter_count, "digits": digit_count}
    return result

user_sentence = input("Please enter a sentence: ")

print(count_letters_and_digits(user_sentence))