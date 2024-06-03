// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 5 no 2 : Program program TOSERBA

#include <stdio.h>

int main () {
	// total pembelian
	double tp;
	
	printf("=====TOSERBA=====");
	printf("\n\nKetikkan total belanja : Rp. ");
	scanf("%lf", &tp);
	
	if (tp <= 75000){
		printf("Selamat anda mendapatkan diskon 5%%");
	}
	else if (tp > 75000, tp <= 125000){
		printf("Selamat anda mendapatkan diskon 15%%");
	}
	else {
		printf("Selamat anda mendapatkan diskon 25%% dan cashback Rp. 5000");
	}
	
	return 0;
}