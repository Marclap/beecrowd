while True:
    palabra = input().split()
    if int(palabra[0]) == 0:
        break
    first = False
    for i in palabra[1]:
        if i == palabra[0]:
            continue
        first = (i != '0') or first
        if first:
            print(i, end="")
    if not first:
        print('0', end="")
    print("")