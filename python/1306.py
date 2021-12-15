case = 1
while True:
    x = input().split()
    r = int(x[0])
    n = int(x[1])
    if r + n == 0:
        break
    if r > n * 27:
        print("Case {}: impossible".format(case))
    else:
        print("Case {}: {}".format(case, int(((r + n - 1) / n) - 1 )))
    case += 1