#include <stdio.h>
void biodata(int rafa, char yn[], char linkon[]) {
    int planos=2020;
    printf("Perkenalkan Nama Saya : %s\n", yn);
    printf("Umur Saya : %d\n", planos-rafa);
    printf("Saya Adalah Angkatan : 2020\n");
    printf("Asal saya dari : %s\n", linkon);
}
int main() {
    int rafa;
    char A[50], B[15]; 
    scanf(" %d",&rafa);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    biodata(rafa, A, B);
}