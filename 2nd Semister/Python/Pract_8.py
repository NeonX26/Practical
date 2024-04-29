word_to_num = {"one": 1,"two": 2,"three": 3,"four": 4,"five": 5,"six": 6,"seven": 7,"eight": 8,"nine": 9,"zero": 0
}
def convert_words_to_numbers(word_list):
    numbers = []
    for word in word_list:
        word = word.lower()
        if word in word_to_num:
            numbers.append(word_to_num[word])
        else:
            print(f"Error: {word} is not a valid word")
    return numbers
words = input("Enter a list of words separated by spaces: ").split()
numbers = convert_words_to_numbers(words)
print(numbers)