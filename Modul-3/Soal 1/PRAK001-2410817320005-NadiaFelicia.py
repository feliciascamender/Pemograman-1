rafa, sylus, xavier = map(int, input("").split())
if rafa > sylus:
    rafa, sylus = sylus, rafa
if sylus > xavier:
    sylus, xavier = xavier, sylus
if rafa > sylus:
    rafa, sylus = sylus, rafa

print(f"{rafa} {sylus} {xavier}")