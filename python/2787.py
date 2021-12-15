a = int(input())
b = int(input())
if a % 2 == 1 and b % 2 == 1:
    print('1')
elif a % 2 == 1 and b % 2 == 0:
    print('0')
elif a % 2 == 0 and b % 2 == 0:
    print('1')
elif a % 2 == 0 and b % 2 == 1:
    print('0')