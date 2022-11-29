"""
 *  Given String S. Determine if there is a Subsequence in S that is equal to "hello" or not.
 *  Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.
"""
hello = "hello"
string = str(input())
j = 0
for i in range(len(string)):
    if j == 5 : break
    elif string[i] == hello[j] :
        j += 1
print("YES") if j == 5 else print("NO")