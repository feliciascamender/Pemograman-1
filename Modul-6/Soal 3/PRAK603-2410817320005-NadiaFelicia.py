a, b = map(int, input().split())
if a != b:
    print("Jumlah tidak sama")
    exit(1)

list_a = list(map(int, input().split()))
list_b = list(map(int, input().split()))

for x, y in zip(list_a, list_b):
    print(x * y, end=" ")