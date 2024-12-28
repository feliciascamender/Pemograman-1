a, b = map(int, input().split())
Bilangan = list(map(int, input().split()))
i = 0
for i in range(a):
    print(*Bilangan[i * b:(i + 1) * b])