# Write a program that takes a sorted list as an input and removes the duplicates.
numbers = list(map(int, input().split()))
print(numbers[0], end=" ")
for i in range(1,len(numbers)):
    if(numbers[i-1] != numbers[i]):
        print(numbers[i], end=" ")
