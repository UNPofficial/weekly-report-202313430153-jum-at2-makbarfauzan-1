
//Created by 23344075_Muhamad Akbar Fauzan
//tugas js 2 no 2 : menghitung nilai akhir mahasiswa

#include <stdio.h>

int main() {

char nama[20];
int nim;
char prodi[30];
char fakultas[20];
float nilai_prak;
float uts;
float uas;
float nilai_akhir;

printf("Ketikkan nama lengkap anda 	: ");
scanf("%[^\n]s", &nama);
printf("Ketikkan NIM anda 		: ");
scanf("%i", &nim);
while(getchar() != '\n');
printf("Ketikkan prodi anda 		: ");
scanf("%[^\n]", &prodi);
while(getchar() != '\n');
printf("Ketikkan fakultas anda 		: ");
scanf("%[^\n]", &fakultas);
printf("Ketikkan nilai praktikum anda 	: ");
scanf("%f", &nilai_prak);
printf("Ketikkan nilai UTS anda 	: ");
scanf("%f", &uts);
printf("Ketikkan nilai UAS anda 	: ");
scanf("%f", &uas);
nilai_akhir = (0.3 * nilai_prak) + (0.3 * uts) + (0.4 * uas);

printf("\n\n");

printf("Nama 		: %s\n", nama);
printf("NIM 		: %i\n", nim);
printf("Prodi 		: %s\n", prodi);
printf("Fakultas	: %s\n", fakultas);
printf("Nilai praktikum : %.2f\n", nilai_prak);
printf("Nilai UTS 	: %.2f\n", uts);
printf("Nilai UAS 	: %.2f\n", uas);
printf("Nilai akhir 	: %.2f\n", nilai_akhir);

return 0;

}


