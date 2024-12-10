rey, rafa = input().split()
rey = int(rey)
for l in range(1, 51):
    if l%rey == 0:
        print(rafa, end=' ')
    else :
        print(l, end=' ')
