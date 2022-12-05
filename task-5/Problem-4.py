def prime_factor(n: int):
    i = 2
    l = []
    while i*i <= n:
        while(n%i == 0):
            l.append(i)
            n/=i
        i+=1
    if(n > 1):
        l.append(int(n))
    return l

n = int(input())
for i in prime_factor(n):
    print(i, end=" ")