n = int(input())
for i in range(n):
    x = input()
    y = []
    for j in x:
        if ',' != j != ' ':
            y.append(j)
    f = dict.fromkeys(y).keys()
    if len(f) == 26:
        print("frase completa")
    elif len(f) >= 13:
        print("frase quase completa")
    else:
        print("frase mal elaborada")