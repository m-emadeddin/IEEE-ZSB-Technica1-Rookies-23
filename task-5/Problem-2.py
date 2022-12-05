stack = []
l = list(input())
for i in l:
    if len(stack) == 0 :
        stack.append(i)
    elif stack[-1] == '(' and i == ')' :
        stack.pop()
    elif stack[-1] == '{' and i == '}' :
        stack.pop()
    elif stack[-1] == '[' and i == ']' :
        stack.pop()
    else:
        stack.append(i)
print("true") if len(stack) == 0 else print("false")