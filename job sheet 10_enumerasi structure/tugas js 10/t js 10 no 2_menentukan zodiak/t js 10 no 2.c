// created by 23343975_Muhamad Akbar Fauzan
// tugas js 10 no 2 : menentukan zodiak

#include <stdio.h>

typedef struct zodiak{
    int tanggal_mulai;
    int bulan_mulai;
    int tanggal_akhir;
    int bulan_akhir;
    const char *nama;
} ZODIAK;


const char *mencari_zodiak(int tanggal, int bulan, ZODIAK zodiak[], int num_zodiak) {
    for (int i = 0; i < num_zodiak; ++i) {
        if ((bulan == zodiak[i].bulan_mulai && tanggal >= zodiak[i].tanggal_mulai) ||
            (bulan == zodiak[i].bulan_akhir && tanggal <= zodiak[i].tanggal_akhir)) {
            return zodiak[i].nama;
        }
    }
    return "Tidak Diketahui";
}

int main() {
    ZODIAK zodiak[] = {
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"},
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"}
    };

    int tanggal, bulan, tahun;

    printf("Ketikkan tanggal lahir anda (tgl bln tahun) : ");
    scanf("%d %d %d", &tanggal, &bulan, &tahun);

    printf("Tanggal Lahir Anda: %02d-%02d-%d\n", tanggal, bulan, tahun);
    
    const char *nama_zodiac = mencari_zodiak(tanggal, bulan, zodiak, sizeof(zodiak) / sizeof(zodiak[0]));

    printf("Zodiak anda adalah: %s\n", nama_zodiac);

    return 0;
}
