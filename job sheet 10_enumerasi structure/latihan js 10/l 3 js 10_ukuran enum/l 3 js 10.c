//Created by 23343075_Muhamad Akbar Fauzan
//latihan 3 js 10 : ukuran enum

#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main (){
	enum hari sekarang;
	
	sekarang = RABU;
	printf("Ukuran variabel enum : %d bytes\n", sizeof(sekarang));
}