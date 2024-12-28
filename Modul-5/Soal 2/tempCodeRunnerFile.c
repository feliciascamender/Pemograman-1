#include <stdio.h>
#include <math.h>
int fathi(int bila){return (bila<0)?-bila:bila;}
int ega(int rihan, int raka){return fathi(rihan-raka);}
int main () {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int ipk = ega(a,b)+ega(c,d);
    printf("%d", fathi(ipk));
}