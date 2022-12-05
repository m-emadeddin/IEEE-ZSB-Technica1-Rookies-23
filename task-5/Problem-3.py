def addSq(n):
    return sum(int(i)**2 for i in str(n))

n = int(input())
l = []
while True:
    n = addSq(n)
    if n == 1 or n in l: break
    l.append(n)
print("true") if n == 1 else print("false")