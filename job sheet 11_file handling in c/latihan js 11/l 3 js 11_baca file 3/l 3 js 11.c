//Created by 23343075_Muhamad Akbar Fauzan
//latihan 3 js 11 : baca_file 3

#include <stdio.h>

void main(){
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if((fptr = fopen("puisi.txt","r")) == NULL){
		printf("Error : File tidak ada !");
		// Tutup program karena file ga ada
		exit(1);
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	}
	
	//tutup file
	fclose(fptr);
}