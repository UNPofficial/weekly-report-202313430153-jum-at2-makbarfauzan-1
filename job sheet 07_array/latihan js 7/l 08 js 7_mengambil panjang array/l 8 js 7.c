// created by 23343975_Muhamad Akbar Fauzan
// latihan 8 js 7 : mengambil panjang array

#include <stdio.h>

int main(){
    // membuat array
    int nilai[5] = {33, 22, 11, 44, 21};

    //  mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi array nilai: %d\n", length);
    
    return 0;
}