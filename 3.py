def third(a, b, c):
    if (a > b and a > c):
        if (a > b):
            return b
        else:
            return a
    else:
        if (b > c):
            return c
        else:
            return b

n = int(input("Enter N: "))
t = []

for i in range(n):
    a, b, c = map(int, input().split())
    result = third(a, b, c)
    t.append(result)

for result in t:
    print(result)