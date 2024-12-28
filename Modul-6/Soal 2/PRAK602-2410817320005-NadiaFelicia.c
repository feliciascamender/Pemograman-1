#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0, x; i < n; ++i) {
        scanf("%d", &x);
        printf("%d ", x * (i + 1));
    }
}
