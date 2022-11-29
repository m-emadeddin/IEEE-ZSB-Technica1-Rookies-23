# Write a program that takes a sorted list as an input and removes the duplicates.
numbers = list(dict.fromkeys(list(map(int, input().split()))))
for i in numbers : print(i, end=" ")