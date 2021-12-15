n = int(input())
for i in range(n):
    x = int(input())
    num = input().split()
    pal = input()
    con = 0
    for j in range(x):
        if int(num[j]) > 2 and pal[j] == 'J':
            con += 1
        if int(num[j]) <= 2 and pal[j] == 'S':
            con += 1
    print(con)