// created by 23343975_Muhamad Akbar Fauzan
// latihan 5 js 9 : mengakses data dengan pointer 2

#include <stdio.h>

void add_score(int score){
    score = score + 5;
}

int main(){
    int score = 0;

    printf("score sebelum diubah: %d\n", score);
    add_score(score);
    printf("score setelah diubah: %d\n", score);
    
    return 0;
}