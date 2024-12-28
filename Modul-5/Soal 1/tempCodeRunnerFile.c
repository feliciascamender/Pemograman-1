#include <stdio.h>

int batas(int rafa, int sylus, int caleb, int zayne)

{
    int max = rafa;
    if (sylus > max) max = sylus;
    if (caleb > max) max = caleb;
    if (zayne > max) max = zayne;
    return max;
}
int main ()
{
    int rafa, sylus, caleb, zayne;
    scanf("%d %d %d %d", &rafa, &sylus, &caleb, &zayne);
    int hasil = batas (rafa, sylus, caleb, zayne);
    printf("%d", hasil);
    return 0;
}