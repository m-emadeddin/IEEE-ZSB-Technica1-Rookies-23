"""
 *  Write a program that asks the user for a string
 *  and tests whether it's a palindrome.
 *  If it's a palindrome print "yes", if not, print "no".
"""
s = str(input())
print("yes") if s == s[::-1] else print("no") 
