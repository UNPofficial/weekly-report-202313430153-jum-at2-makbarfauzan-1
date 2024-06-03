// created by 23343975_Muhamad Akbar Fauzan
// tugas js 10 no 1 : game nomor acak

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nomor_rahasia, tebakan, percobaan = 0;
    char main_lagi;

    srand(time(NULL));

    do {
        nomor_rahasia = rand() % 20 + 1;

        printf("Hai! Saya telah memilih nomor antara 1 dan 20. Coba tebak!\n");

        do {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &tebakan);

            percobaan++;

            if (tebakan < nomor_rahasia) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomor_rahasia) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar! Anda membutuhkan %d percobaan.\n", percobaan);
            }
        } while (tebakan != nomor_rahasia);

        printf("Ingin bermain lagi? (y/t): ");
        scanf(" %c", &main_lagi);

        percobaan = 0;

    } while (main_lagi == 'y' || main_lagi == 'Y');

    printf("Terima kasih telah bermain. Sampai jumpa!\n");

    return 0;
}
