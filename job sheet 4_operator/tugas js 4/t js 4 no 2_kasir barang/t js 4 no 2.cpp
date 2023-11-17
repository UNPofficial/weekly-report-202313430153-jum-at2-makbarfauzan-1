// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 4 no 2 : program mancari harga total belanja

#include <stdio.h>

int main () {
	char np[40]; // nama pembeli
	char nb[40]; // nama barang
	int hbs; // harga barang satuan
	int jb; // jumlah barang yg dibeli
	int ht; // harga total
	
	printf("Ketikkan nama anda		: ");
	scanf("%[^\n]s", &np);
	while(getchar() != '\n');
	printf("Ketikkan nama barang		: ");
	scanf("%s", &nb);
	while(getchar() != '\n');
	printf("Ketikkan harga barang satuan	: Rp. ");
	scanf("%i", &hbs);
	printf("Ketikkan jumlah barang yg dibeli: ");
	scanf("%i", &jb);
	
	ht = hbs * jb;
	
	printf("\n");
	printf("Jadi harga total		: Rp. %i ", ht);
	printf("\n");
	
	return 0;
}
