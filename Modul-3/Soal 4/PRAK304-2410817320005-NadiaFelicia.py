rafa = input()
rafa = int(rafa)

if rafa == 0:
    print("nol")
elif rafa >= 1 and rafa <=9:
    print("Satuan")
elif rafa >= 11 and rafa <=19:
    print("Belasan")
elif rafa >= 20 and rafa <=99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")