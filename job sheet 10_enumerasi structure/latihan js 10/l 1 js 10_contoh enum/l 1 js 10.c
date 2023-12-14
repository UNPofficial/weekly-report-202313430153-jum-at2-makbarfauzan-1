//Created by 23343075_Muhamad Akbar Fauzan
//latihan 1 js 10 : contoh enum

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main (){
	enum hari sekarang;
	
	sekarang = RABU;
	printf("Sekarang hari ke-%d", sekarang + 1);
}