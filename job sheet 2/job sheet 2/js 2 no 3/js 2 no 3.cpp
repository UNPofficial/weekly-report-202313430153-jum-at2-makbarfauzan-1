
//Created by 23343075_Muhamad Akbar Fauzan

#include <stdio.h>

//menghitung luas segitiga

int main () {
	
	int pa = 8;
	int t = 5;
	int l;
	
	printf("Menghitung luas segitiga dengan\n");
	printf("\n");
	
	printf("Panjang alas 	: %i cm\n", pa);
	printf("Tinggi segitiga : %i cm\n", t);
	l = pa*t/2;
	printf("\n----------------\n");
	printf("Luas segitiga : %i cm^2\n", l);
	
	return 0;
}