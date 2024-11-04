#include <stdio.h>

int main() {
    char name1[20], name2[20], name3[20], name4[20];
    int nim;
    int class;
    char address[100];
    char born[20];
    int date, month, year;  
    char hobby[20];
    int phone[50];

    printf("Nama: ");
    scanf("%s" "%s" "%s" "%s", &name1, &name2, &name3, &name4);

    printf("NIM: ");
    scanf("%d", &nim);

    printf("Kelas Paralel: ");
    scanf("%d", &class);

    printf("Tempat/Tanggal Lahir: ");
    scanf("%s" "%d" "%d" "%d", &born, &date, &month, &year);
    
    getchar(); 
    printf("Alamat: ");             
    scanf(" %[^\n]", address);

    printf("Hobby: ");
    scanf(" %s", &hobby);

    printf("NO. HP: ");
    scanf("%s", &phone);

    printf("\n\n");
    printf("Nama : %s %s %s %s\n", name1, name2, name3, name4);
    printf("NIM : %d\n", nim);
    printf("Kelas Paralel : %d\n" , class);
    printf("Tempat/Tanggal Lahir : %s %02d %02d %d\n", born, date, month, year);
    printf("Alamat : %s\n", address);
    printf("Hobby  : %s\n", hobby);
    printf("NO. HP : %s\n", phone);
}