#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matriks1[n][n], matriks2[n][n], matriks3[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &matriks1[i][j]);

    printf("Matriks B\n");
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &matriks2[i][j]);

    printf("Matriks AXB\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriks3[i][j] = 0;
            for (int k = 0; k < n; ++k)
                matriks3[i][j] += matriks1[i][k] * matriks2[k][j];
            printf("%d ", matriks3[i][j]);
        }
        printf("\n");
    }
}
