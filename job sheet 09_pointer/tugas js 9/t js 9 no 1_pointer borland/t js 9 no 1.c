// created by 23343975_Muhamad Akbar Fauzan
// tugas js 9 no 1 : pointer BORLAND

#include <stdio.h>
#include <string.h>

void printMundur(char *kataKata, int mulai, int selesai) {
    for (int i = mulai; i <= selesai; i++) {
        printf("%c", *(kataKata + i));
    }
}

int main() {
    char kata[] = "BORLAND";
    int panjangKata = strlen(kata);

    for (int i = panjangKata - 1; i >= 0; i--) {
        printMundur(kata, i, panjangKata - 1);
        printf("\n");
    }

    return 0;
}