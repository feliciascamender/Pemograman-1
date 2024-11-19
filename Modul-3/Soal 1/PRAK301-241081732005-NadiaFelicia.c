#include <stdio.h>

int main() {
    int rafa, sylus, caleb;

    printf("");
    scanf("%d %d %d", &rafa, &sylus, &caleb);

    if (rafa > sylus) {
        int temp = rafa;
        rafa = sylus;
        sylus = temp;
    }

    if (sylus > caleb) {
        int temp = sylus;
        sylus = caleb;
        caleb = temp;
    }

    if (rafa > sylus) {
        int temp = rafa;
        rafa = sylus;
        sylus = temp;
    }

    printf("%d %d %d\n", rafa, sylus, caleb);

    return 0;
}
