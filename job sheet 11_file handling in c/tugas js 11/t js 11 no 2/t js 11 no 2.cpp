// created by 23343975_Muhamad Akbar Fauzan
// tugas js 11 no 2 : baca data mahasiswa txt

#include <stdio.h>

int main(){
	char buff[255];
	FILE *fptr;
	
	//membuka file
	if((fptr = fopen("datamahasiswa.txt","r")) == NULL){
		printf("Error : File tidak ada !");
		// Tutup program karena file ga ada
		return 0;
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("%s", buff);
	}
	
	//tutup file
	fclose(fptr);
	return 0;
}