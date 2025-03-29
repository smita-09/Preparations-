square = [ i*i for i in range(10)]
print(square)

evens = [i for i in range(21) if i%2 ==0 ]
print(evens)

odds = [i for i in range(21) if i%2 ==1 ]
print(odds)

list_words = ['smita' ,'is', 'awesome', 'interviews', 'will', 'be', 'nice']
len_words = [len(w) for w in list_words]
print(len_words)


vowels = ['a', 'e', 'i', 'o', 'u']
vowels_in_words = [c for w in list_words for c in w if c in vowels]
print(vowels_in_words)

nums = [1, 5, 6, 23, 6, 34, 746, 78]
square_nums = [n*n for n in nums if n%2==1]
print(square_nums)

dict_word_len = {w: len(w) for w in list_words}
print(dict_word_len)

dict_nums = {n: 'odd' if n % 2 == 1 else 'even' for n in nums }

sentence = "This is an amazing challenge"
vowels = "aeiou"
num_of_vowels = {w: sum(1 for c in w.lower() if c in vowels) for w in sentence.split()}
print(num_of_vowels)