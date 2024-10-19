#include <stdio.h>

int main() {
    int a,b,x,y;
    a = 9; b = 5; x = 8; y = 8;
    
    int jumlah = a % b % x % y;

    printf("Varaibel a bernilai %d\n", a);
    printf("Varaibel b bernilai %d\n", b);
    printf("Varaibel x bernilai %d\n", x);
    printf("Varaibel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", jumlah);    

    }