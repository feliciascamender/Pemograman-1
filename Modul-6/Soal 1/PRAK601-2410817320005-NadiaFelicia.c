#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int matriks[a][b];

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            scanf("%d", &matriks[i][j]);
            printf("%d%c", matriks[i][j], j == b - 1 ? '\n' : ' ');
        }
    }
}