#include <stdio.h>

int main() {
    int rafa, sylus, zayne, xavier;

    scanf("%d", &rafa);

    sylus = rafa / 3600;
    xavier = rafa % 3600;
    zayne = xavier / 60;
    xavier = xavier % 60;

    printf("%.2d:%.2d:%.2d\n", sylus, zayne, xavier);

    return 0;
}