#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float r, luas, sudut, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung luas Bagian Lingkaran\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan panjang jari-jari lingkaran (cm) : ");
    scanf("%f", &r);
    printf("Masukan besar sudut (deg) : ");
    scanf("%f", &sudut);

    luas = 3.14 * r * r;
    hasil = sudut / 360 * luas;
    printf("Luas bagian lingkaran adalah (cm) : %.2f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}