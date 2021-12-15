import math

x = int(input())
for i in range(x):
    a = input().split()
    print(math.gcd(int(a[0]), int(a[1])))