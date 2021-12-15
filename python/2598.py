n = int(input())
for i in range(n):
    x = input().split()
    if int(x[0]) % int(x[1]) == 0:
        print(int(int(x[0]) / int(x[1])))
    else:
        print(int(int(x[0]) / int(x[1])) + 1)