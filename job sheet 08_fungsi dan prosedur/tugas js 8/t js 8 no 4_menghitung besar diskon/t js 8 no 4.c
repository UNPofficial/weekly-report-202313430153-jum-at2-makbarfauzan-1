// created by 23343975_Muhamad Akbar Fauzan
// tugas js 8 no 4 : menghitung besar diskon

#include <stdio.h>

int potong(int belanja){
	if (belanja < 1000000){
		printf("Maaf anda tidak mendapat diskon");
	}
	else if (belanja > 1000000, belanja < 3000000){
		printf("\nSelamat anda mendapat diskon 20%%");
		printf("\nTotal pembelian			: Rp. %i", belanja);
		int besardiskon = belanja * 0.2;
		printf("\nBesar diskon			: Rp. %i", besardiskon);
		int hargatotal = belanja - besardiskon;
		printf("\nBesar yang harus dibayarkan	: Rp. %i", hargatotal);
	}
	else {
		printf("\nSelamat anda mendapat diskon 35%%");
		printf("\nTotal pembelian			: Rp. %i", belanja);
		int besardiskon = belanja * 0.35;
		printf("\nBesar diskon			: Rp. %i", besardiskon);
		int hargatotal = belanja - besardiskon;
		printf("\nBesar yang harus dibayarkan	: Rp. %i", hargatotal);
	}
	return 0;
}

int main(){
	int belanja;
	
	printf("===PROGRAM MENGHITUNG DISKON===\n\n");
	printf("Ketikkan total pembelian : Rp. ");
	scanf("%i", &belanja);
	potong(belanja);
	printf("\n");
	
	return 0;
}