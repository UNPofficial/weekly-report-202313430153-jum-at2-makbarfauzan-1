// created by 23343975_Muhamad Akbar Fauzan
// latihan 9 js 8 : pass by reference

#include <stdio.h>

void kali_dua(int *num){
    *num = *num * 2;
}

int main(){
    int angka = 9;

    // memanggil fungsi
    kali_dua(&angka);

    // mencetak isi variabel
    // setelah fungsi dipanggil
    printf("isi variabel angka = %d\n", angka);
    
    return 0;
}