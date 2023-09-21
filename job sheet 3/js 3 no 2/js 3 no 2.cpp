
// Created by 23343075_Muhamad Akbar Fauzan

#include <stdio.h>

int main() {
	float c, k, f, r;
	
	printf("Masukkan nilai suhu celcius : ");
	scanf("%f", &c);
	
	k = c + 273.15;
	f = (c * 1.8) + 32;
	r = c * 0.8;
	
	printf("\n");
	
	printf("Input suhu (celcius) 	= %.2f C\n", c);
	printf("Suhu dalam kelvin 	= %.2f K\n", k);
	printf("Suhu dalam fahrenheit 	= %.2f F\n", f);
	printf("Suhu dalam reamur 	= %.2f R\n", r);
	
	return 0;
}