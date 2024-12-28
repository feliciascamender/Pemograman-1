#include <stdio.h>
#include <string.h>

int main() {
    char str1[1002], str2[1002], str3[1002];
    int char_sama = 0, char_tidaksama = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (strlen(str1) != strlen(str2)) {
        printf("Panjang kalimat berbeda, pesan palsu");
        return 1;
    }

    for (int i = 0; str1[i] != '\n'; ++i) {
        if (str1[i] == str2[i]) {
            str3[i] = (str1[i] == ' ') ? ' ' : '*';
            char_sama += (str1[i] != ' ');
        } else {
            str3[i] = '#';
            char_tidaksama++;
        }
        putchar(str3[i]);
    }

    printf("\n* = %d\n# = %d\nPesan %s", char_sama, char_tidaksama, 
           (char_sama >= char_tidaksama) ? "Asli" : "Palsu");
    return 0;
}
