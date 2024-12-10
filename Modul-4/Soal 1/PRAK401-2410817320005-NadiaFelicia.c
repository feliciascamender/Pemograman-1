#include <stdio.h>

int main() {
    int i, kagebunshin;
    char akatsuki;

    scanf("%d %c", &kagebunshin, &akatsuki);
    for(i = 1; i <= 50; i++) {
        if(i % kagebunshin == 0) {
            printf("%c ", akatsuki);}
        else {
            printf("%d ", i);}

    }

}