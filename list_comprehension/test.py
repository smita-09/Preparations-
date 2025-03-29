x = "10"
y = 5
print(x * y)

# This is to tell that lists are immutable
list1 = [1, 2, 3]
list2 = list1
list2.append(4)
print(list1)  # Output: [1, 2, 3, 4]
print(list2)  # Output: [1, 2, 3, 4]

d = {'a': 1, 'b': 2}
print(d.get('c', 3))

def func(a, b=5):
    return a + b

print(func(2))
print(func(2, 3))

x = 3
y = 4
print(x == 3 and y == 4)

d = {1: "apple", 2: "banana", 3: "cherry"}
print(d.get(4, "Not Found"))

s = "hello world"
print(s.capitalize())

x = 5
y = 10
x, y = y, x
print(x, y)

a = [1, 2, 3]
b = [1, 2, 3]
c = b
print(a == b) # checks if values are same
print(a is b) # checks if both these vars are referencing to the same object
print(c is b)


a = [1, 2, 3, 4, 5]
b = a[:]  # Create a shallow copy of the list using slicing
b.append(6)

# Creating a list
nums = [10, 20, 30, 40, 50]

# List methods
nums.append(60)  # [10, 20, 30, 40, 50,60]
nums.remove(20)  # [10, 30, 40, 50,60]
nums.insert(2, 25)  # [10, 30,25, 40, 50,60]
nums.pop() # [10, 30,25, 40, 50]
nums.reverse()  # [50, 40, 25, 30, 10]

print(nums)  # Output?
nums.sort(reverse=True)
print(nums)

tup = (10, 20, 30)
print(tup[1])  # Output?
# tup[1] = 100  # What happens here?


person = {'name': 'Alice', 'age': 30}
print(person['name'])  # Output: Alice
person['city'] = 'New York'
del person['age']

keys = person.keys()  # Returns all keys
values = person.values()  # Returns all values
items = person.items()  # Returns all key-value pairs
print(keys, values, items)
person.get('age')

# Creating a set
numbers = {1, 2, 3, 4}
numbers.add(5)
numbers.remove(3) # {1,2,4,5}
union = numbers.union({6, 7})  # {1,2,4,5, 6,7}
intersection = numbers.intersection({2, 3, 4})  # {2,4}
difference = numbers.difference({2, 3})  #{1,4,5}
print(union, intersection, difference)

nums = {10, 20, 30, 40}
# nums.remove(50) # this will raise an error
print(nums)

def func(x=[]):  # Mutable default argument
    x.append(1)
    return x

print(func())
print(func())

# a = ([1, 2], [3, 4])  # a is a tuple that contains two lists
# a[0] += [5, 6]         # We try to modify the first list in the tuple
# print(a)               # Output

# a = ([1, 2], [3, 4])
# a = (a[0] + [5, 6], a[1])  # Recreate the tuple after modifying the first list
# print(a)  # Output: ([1, 2, 5, 6], [3, 4])

a = ([1, 2], [3, 4])
a[0].append(5)  # Modify the first list in place
print(a)  # Output: ([1, 2, 5], [3, 4])