#include <stdio.h>

int main() {
    int rafa;
    scanf("%d", &rafa);

    if (rafa == 0) {
        printf("Nol");
    }
    else if (rafa == 10 || rafa >= 20 && rafa <=99) {
        printf("Puluhan");
    }
    else if (rafa >= 1 && rafa <= 9) {
        printf("Satuan");
    }
    else if (rafa >= 11 && rafa <= 19) {
        printf("Belasan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    }