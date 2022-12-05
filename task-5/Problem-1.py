def max_heapify(list, n, i):
    largest = i
    l = 2 * i + 1 
    r = 2 * i + 2 
    if l < n and list[largest] < list[l]:
        largest = l

    if r < n and list[largest] < list[r]:
        largest = r

    if largest != i:
        list[i], list[largest] = list[largest], list[i]
        max_heapify(list, n, largest)



l = list(map(int,input().split()))
index = len(l)//2 - 1
while index >= 0 :
        max_heapify(l, len(l), index)
        index -= 1
for i in l :
    print(i, end=" ")