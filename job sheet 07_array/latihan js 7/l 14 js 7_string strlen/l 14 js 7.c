// created by 23343975_Muhamad Akbar Fauzan
// latihan 14 js 7 : string strlen

#include <stdio.h>
#include <string.h>

int main(){
	char nama[] = "________________";
	int panjang_nama;
	
	//meghitung panjang nama
	panjang_nama = strlen(nama);
	
	printf("Nama\t: %s\n", nama);
	printf("Panjang\t: %d Karakter\n", panjang_nama);
	
	return 0;
}