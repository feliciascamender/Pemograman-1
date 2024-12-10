#include <stdio.h>

void printCross(int zayne, int rafa) {
    if(zayne > rafa) {
        for(int i = zayne; i >= rafa; i--) {
            printf("%d %d", i, zayne + rafa - i);
            if(i > rafa) {
                printf(" - ");
            }
        }
    }
    else {
        for(int i = zayne; i <= rafa; i++) {
            printf("%d %d", i, rafa - i + zayne);
            if(i < rafa) {
                printf(" - ");
            }
        }
    }
    printf("\n");
}

int main() {
    int caleb, sylus;

    printf(" ");
    scanf("%d %d", &caleb, &sylus);

    printCross(caleb, sylus);
}
