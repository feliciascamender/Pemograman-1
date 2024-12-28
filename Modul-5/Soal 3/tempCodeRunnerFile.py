def canyol(a, b):
    return max(a, int(b))
def bws(a, b):
    return min(a, int(b)) 
exo = 0
pati = -100000
awa = 100000
bilangan = int(input())
i = 0
nilai = input().split()
while i < bilangan:
    pati=canyol(pati,nilai[i])
    awa=bws(awa,nilai[i])
    i+=1
print(pati, awa)

