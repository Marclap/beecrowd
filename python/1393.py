x=[1, 2]

def fibo():
    for i in range(2, 40):
        x.append(x[i - 1] + x[i - 2])

fibo()
while True:
    f = int(input())
    if f == 0:
        break
    print(x[f - 1])