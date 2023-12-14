// created by 23343975_Muhamad Akbar Fauzan
// tugas js 9 no 2 : kalimat terbalik

#include <stdio.h>
#include <string.h>

void kalimatTerbalik(char kata[]) {
    int i, j;
    char hasil;

    for (i = 0, j = strlen(kata) - 1; i < j; i++, j--) {
        hasil = kata[i];
        kata[i] = kata[j];
        kata[j] = hasil;
    }
}

int main() {
    char kalimat[1000];

    printf("Ketikkan kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';
    kalimatTerbalik(kalimat);

    printf("Kalimat terbalik : %s\n", kalimat);

    return 0;
}