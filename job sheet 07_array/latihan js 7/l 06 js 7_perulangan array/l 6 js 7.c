// created by 23343975_Muhamad Akbar Fauzan
// latihan 6 js 7 : perulangan array

#include <stdio.h>

int main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[1] = 32;
    nilai[2] = 42;
    nilai[3] = 76;
    nilai[4] = 31;
    nilai[5] = 57;

    // mencetak isi array dengan perulangan
    for(int i = 1; i <= 5; i++){
        printf("Nilai ke-%i: %d\n", i, nilai[i]);
    }
    return 0;
}