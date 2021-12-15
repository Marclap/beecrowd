while True:
    try:
        x = input()
        con = 0
        for i in x:
            if i == ' ':
                print(i, end="")
            elif con % 2 == 0:
                print(i.upper(), end="")
                con += 1
            else:
                print(i.lower(), end="")
                con += 1
        print("")
    except EOFError:
        break