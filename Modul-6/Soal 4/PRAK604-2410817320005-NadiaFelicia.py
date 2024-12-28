str1 = input()
str2 = input()

if len(str1) != len(str2):
    print("Panjang kalimat berbeda, pesan palsu")
    exit(1)

char_sama = 0
char_tidaksama = 0
str3 = []

for ch1, ch2 in zip(str1, str2):
    if ch1 == ch2:
        str3.append('*' if ch1 != ' ' else ' ')
        char_sama += (ch1 != ' ')
    else:
        str3.append('#')
        char_tidaksama += 1

print(''.join(str3))
print(f"* = {char_sama}")
print(f"# = {char_tidaksama}")
print("Pesan Asli" if char_sama >= char_tidaksama else "Pesan Palsu")
