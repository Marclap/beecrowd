n = int(input())
for i in range(n):
    x = input().split()
    print("{} cm2".format(int((int(x[0]) * int(x[1])) / 2)))