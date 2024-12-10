def kalkulator():
    name = input("Masukkan nama Anda : ")

    while True:
        print("Pilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Perkalian")
        print("5. Exit")

        lads = int(input("Masukkan Pilihan :"))
        if lads == 5:
            print(f"Terimakasih, telah menggunakan kalkulator {name}")
            break
        elif lads in[1, 2, 3, 4]:
            rafa = float(input("Masukkan nilai pertama :"))
            caleb = float(input("Masukkan nilai kedua :"))

            if lads == 1:
                rey = rafa + caleb
                print(f"Hasil penjumlahan antara {rafa:.2f} dengan {caleb:.2f} adalah {rey:.2f} \n")
            elif lads == 2:
                rey = rafa - caleb
                print(f"Hasil Pengurangan antara {rafa:.2f} dengan {caleb:.2f} adalah {rey:.2f} \n")
            elif lads == 3:
                rey = rafa * caleb
                print(f"Hasil Perkalian antara {rafa:.2f} dengan {caleb:.2f} adalah {rey:.2f} \n")
            elif lads == 4:
                rey = rafa / caleb
                print(f"Hasil Pembagian antara {rafa:.2f} dengan {caleb:.2f} adalah {rey:.2f} \n")
        else:
            print("Input anda salah, silahkan coba lagi \n")
kalkulator()