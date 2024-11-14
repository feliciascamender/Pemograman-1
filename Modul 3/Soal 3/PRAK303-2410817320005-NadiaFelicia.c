#include <stdio.h>

int main() {
    int rafa;
    scanf("%d", &rafa);

    if (rafa > 0) {
        printf("positif");
    }
    else if (rafa < 0) {
        printf("negatif");
    }
    else {
        printf("nol");
    }
}