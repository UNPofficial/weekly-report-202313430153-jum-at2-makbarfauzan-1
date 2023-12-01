// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 4 no 3 : program menghitung nilai akhir

#include <stdio.h>

int main (){
	// presensi, praktek, uts, uas, nilai akhir
	float pre, pra, uts, uas, na;
	
	printf("Ketikkan nilai presensi	: ");
	scanf("%f", &pre);
	printf("Ketikkan nilai praktek	: ");
	scanf("%f", &pra);
	printf("Ketikkan nilai uts	: ");
	scanf("%f", &uts);
	printf("Ketikkan nilai uas	: ");
	scanf("%f", &uas);
	
	na = (0.1*pre)+(0.2*pra)+(0.3*uts)+(0.4*uas);
	
	printf("\n");
	printf("Nilai akhir		: %.2f ", na);
	printf("\n");
	
	return 0;
}
