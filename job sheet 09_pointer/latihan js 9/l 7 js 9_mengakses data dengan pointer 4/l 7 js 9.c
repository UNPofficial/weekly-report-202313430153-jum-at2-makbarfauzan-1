// created by 23343975_Muhamad Akbar Fauzan
// latihan 7 js 9 : mengakses data dengan pointer 4

#include <stdio.h>

void add_score(int *score){
    *score = *score + 5;
    printf("score dibuah ke: %d\n", *score);
}

int main(){
    int score = 0;

    printf("score sebelum diubah: %d\n", score);
    add_score(&score);
    printf("score setelah diubah: %d\n", score);
    
    return 0;
}