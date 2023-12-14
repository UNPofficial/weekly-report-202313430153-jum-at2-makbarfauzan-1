// created by 23343975_Muhamad Akbar Fauzan
// tugas js 11 no 1 : data mahasiswa txt

#include <stdio.h>

int main() {
    FILE *fptr;
    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &jumlahMahasiswa);

    // Buka file untuk penulisan ("w" mode)
    fptr = fopen("datamahasiswa.txt", "w");

    if (fptr == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return 1;
    }

    // Loop untuk input biodata setiap mahasiswa
    for (int i = 1; i <= jumlahMahasiswa; ++i) {
        
        // Input data mahasiswa
        printf("\nData mahasiswa ke %d\n", i);
        
        printf("Nama		: ", i);
        char nama[100];
        scanf(" %[^\n]", nama);

        printf("NIM		: ", i);
        char nim[20];
        scanf(" %[^\n]", nim);

        printf("Jurusan		: ", i);
        char jurusan[50];
        scanf(" %[^\n]", jurusan);

        printf("Program Studi	: ", i);
        char programStudi[50];
        scanf(" %[^\n]", programStudi);

        // Menyimpan data ke dalam file
        fprintf(fptr, "Data mahasiswa ke %d\n", i);
        fprintf(fptr, "Nama		: %s\n", nama);
        fprintf(fptr, "NIM		: %s\n", nim);
        fprintf(fptr, "Jurusan		: %s\n", jurusan);
        fprintf(fptr, "Program Studi	: %s\n\n", programStudi);
    }

    // Tutup file setelah selesai
    fclose(fptr);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt\n");

    return 0;
}
