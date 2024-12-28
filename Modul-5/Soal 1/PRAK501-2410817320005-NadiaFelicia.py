def batas(rafa, sylus, caleb, zayne):
    return max(rafa, sylus, caleb, zayne)
rafa, sylus, caleb, zayne = map(int, input().split())
hasil = batas(rafa, sylus, caleb, zayne)
print(hasil)
