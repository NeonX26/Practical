# 17.	Write a program to find the list of words that are longer than n from a given list of words.
def find_long_words(words, n):
  long_words = []
  for word in words:
    if len(word) > n:
      long_words.append(word)
  return long_words


words = ["apple", "banana", "cherry", "date", "fig", "grape"]
n =int(input("Enter  value of n : "))
print("List of Words is : ",list(filter(lambda word: len(word) > n, words))) 