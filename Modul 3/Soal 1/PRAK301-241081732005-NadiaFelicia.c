#include <stdio.h>

int main() {
    int rafa, sylus;

    printf(" ");
    scanf("%d %d", &rafa, &sylus); 

    if (rafa > sylus) {
        int temp = rafa;
        rafa = sylus;
        sylus = temp;
    }

    printf(" %d %d\n", rafa, sylus);

}