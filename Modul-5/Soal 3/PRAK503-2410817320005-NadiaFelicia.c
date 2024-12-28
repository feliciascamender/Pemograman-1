#include <stdio.h>
int canyol(int rafa, int sylus){return (rafa>sylus)?rafa:sylus;}
int bws(int rafa, int sylus){return (rafa<sylus)?rafa:sylus;}
int main () {
    int exo = 0, bilangan, ega, pati=-100000, awa=100000;
    scanf("%d", &bilangan);
    while (exo < bilangan) {
        scanf("%d", &ega);
        pati = canyol(pati, ega);
        awa = bws(awa, ega);
        exo++;
    }
    printf("%d %d", pati, awa);
}