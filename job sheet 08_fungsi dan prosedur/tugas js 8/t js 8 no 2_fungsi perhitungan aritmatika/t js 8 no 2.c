// created by 23343975_Muhamad Akbar Fauzan
// tugas js 8 no 2 : perhitungan aritmetik

#include <stdio.h>

float penjumlahan(float a, float b){
	float hasil = a + b;
	printf("Hasil dari %.2f + %.2f = %.2f\n", a, b, hasil);
	return 0;
}
float pengurangan(float a, float b){
	float hasil = a - b;
	printf("Hasil dari %.2f - %.2f = %.2f\n", a, b, hasil);
	return 0;
}
float perkalian(float a, float b){
	float hasil = a * b;
	printf("Hasil dari %.2f * %.2f = %.2f\n", a, b, hasil);
	return 0;
}
float pembagian(float a, float b){
	float hasil = a / b;
	printf("Hasil dari %.2f / %.2f = %.2f\n", a, b, hasil);
	return 0;
}

int main(){
	int menu;
	float a, b;
	
	printf("====PROGRAM RUMUS ARITMATIKA====\n\n");
	printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n\n");
	
	printf("Pilihan anda : ");
	scanf("%i", &menu);
	
	switch(menu){
		case 1 :
			printf("Ketikkan angka 2 angka dengan jarak spasi : ");
			scanf("%f %f", &a, &b);
			penjumlahan(a,b);
			break;
		case 2 :
			printf("Ketikkan angka 2 angka dengan jarak spasi : ");
			scanf("%f %f", &a, &b);
			pengurangan(a,b);
			break;
		case 3 :
			printf("Ketikkan angka 2 angka dengan jarak spasi : ");
			scanf("%f %f", &a, &b);
			perkalian(a,b);
			break;
		case 4 :
			printf("Ketikkan angka 2 angka dengan jarak spasi : ");
			scanf("%f %f", &a, &b);
			pembagian(a,b);
			break;
		default :
			printf("Pilihan tidak tersedia");
	}
	return 0;
}