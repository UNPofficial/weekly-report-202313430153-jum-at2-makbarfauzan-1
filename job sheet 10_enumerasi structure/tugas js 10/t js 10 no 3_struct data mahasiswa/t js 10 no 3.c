// created by 23343975_Muhamad Akbar Fauzan
// tugas js 10 no 3 : struct data mahasiswa

#include <stdio.h>

typedef struct INPUT_DATA {
    int npm;
    char nama[20];
    char tgl_lahir[20];
    char alamat[50];
    int hp;
} input_data;

int main() {
    input_data mahasiswa[50];
    char ulang;
    int i, jumlah_mahasiswa = 0;

    do {
        printf("NPM         : ");
        scanf("%i", &mahasiswa[jumlah_mahasiswa].npm);
        printf("NAMA        : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].nama);
        printf("TGL LAHIR   : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].tgl_lahir);
        printf("ALAMAT      : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].alamat);
        printf("HP          : ");
        scanf("%i", &mahasiswa[jumlah_mahasiswa].hp);

        jumlah_mahasiswa++;

        printf("\nMau memasukkan data lagi ? (y/t)  : ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("\nNPM\t\tNAMA\t\tTGL LAHIR\tALAMAT\t\tHP");
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("\n%i\t%s\t\t%s\t%s\t\t%i", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir,
            mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
