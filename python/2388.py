n = int(input())
dist = 0
for i in range(n):
    tmp = input().split()
    dist += (int(tmp[0]) * int(tmp[1]))
print(dist)