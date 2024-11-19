rafa = int(input())
sylus = rafa // 3600
caleb = (rafa % 3600) // 60
rafa = rafa % 60
print(f"{sylus:02d}:{caleb:02d}:{rafa:02d}")