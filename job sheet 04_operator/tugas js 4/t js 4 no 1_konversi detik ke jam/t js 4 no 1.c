// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 4 no 1 : program konversi detik ke jam, menit, detik

#include <stdio.h>

int main (){
	// jam, sisa jam, menit, sisa menit, detik, total detik 
	int j, sj, m, sm, d, td; 
	
	printf("Ketikkan detik : ");
	scanf("%i", &td);
	
	j = td / 3600;
	//sj = td % 3600;
	//m = sj / 60;
	//sm = sj % 60;
	//d = sm;
	m = td % 3600 / 60;
	d = td % 3600 % 60;
	
	
	printf("\n\n");
	printf("Jadi hasilnya sama dengan  %i jam, %i menit, %i detik ", j, m, d);
	printf("\n");
	
	return 0;
	
} 
