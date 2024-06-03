// created by 23343975_Muhamad Akbar Fauzan
// latihan 7 js 8 : variabel lokal dan global

#include <stdio.h>

// membuat variabel global
int nilai = 9;

int main(){
    // membuat variabel lokal
    int nilai = 7;

    // mencetak variabel
    printf("Nilai: %d\n", nilai);
    
    return 0;
}