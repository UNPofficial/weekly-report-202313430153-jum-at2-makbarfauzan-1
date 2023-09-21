
// Created by 23343075_Muhamad Akbar Fauzan

#include <stdio.h>

int main() {
	float rupiah, dollar;
	
	
	printf("Silahkan masukkan uang anda 		: Rp. ");
	scanf("%f", &rupiah);
	
	dollar = rupiah / 14250;
	
	printf("\n");
	
	printf("Jadi uang anda  dalam dollar adalah	: $ %2.f", dollar);
	
	
	return 0;
}

