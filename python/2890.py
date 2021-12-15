while True:
    x = int(input())
    if x == 0:
        break
    print(((x ** 4 + 11 * (x ** 2)) // 12) % 1000007)