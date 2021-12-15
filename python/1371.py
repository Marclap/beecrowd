import math
a = []
a.append(0)
a.append(1)
for i in range(2, 5001):
    a.append(i * i)

while True:
    n = int(input())
    if n == 0:
        break
    x = int(math.sqrt(n))
    j = 1
    while j < x:
        if a[j] > n:
            break
        print(a[j], end = ' ')
        j += 1
    print(a[x])