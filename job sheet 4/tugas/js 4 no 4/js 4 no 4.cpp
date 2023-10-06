// Created by 23343075_Muhamad Akbar fauzan
// program rental film

#include <stdio.h>

int main () {
	// satu jam, durasi jam, total harga
	int sj = 15000;
	int dj, th;
	
	
	printf("Ketikkan durasi jam menonton	: ");
	scanf("%i", &dj);
	
	th = sj + (dj * 0.5 * sj) - 7500;
	
	printf("\n");
	printf("Total harga yg harus dibayarkan	: Rp. %i ", th);
	printf("\n");                               
	                                             
	return 0;	
}
