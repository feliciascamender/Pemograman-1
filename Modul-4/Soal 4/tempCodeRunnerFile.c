#include <stdio.h>
int main(void){
    float  r, x, y;

    while(1){
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan =\t");
        scanf("%f", &r);
        
        if(r>5 || r<1){printf("Input anda salah, silahkan coba lagi"); continue; }
        else if(r==5) {printf("Terimakasih, telah menggunakan kalkulator pacarnya rafayel"); break;}
    printf("Masukkan nilai pertama : ");
    scanf("%f", &x);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &y);
    if(r==1){printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n",x,y, x+y);}
    else if(r==2){printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n",x,y, x-y);}
    else if(r==3){printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n",x,y, x*y);}
    else if(r==4){if(y!=0){printf("Hasil pembagian antar %.2f dengan %.2f adalah %.2f\n",x,y, x/y); }
    else{printf("Hasil tidak terdefinisi\n");}
    }
}
}