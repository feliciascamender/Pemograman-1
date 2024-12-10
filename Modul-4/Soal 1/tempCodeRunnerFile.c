#include <stdio.h>

void kelipatan_dengan_simbol(int n, char akatsuki) {
    for(int i = 1; i <= 50; i++) {
        if (i % n == 0) {
            printf("%c ", akatsuki);
        }
        else {
            printf("%d ", i);
        }  
    }
    printf("\n");
}

int main() {
    int kagebunshin;
    char akatsuki;
    printf(" ");
    scanf("%d %c", &kagebunshin, &akatsuki);
    kelipatan_dengan_simbol(kagebunshin, akatsuki);
    return 0;
}