// created by 23343975_Muhamad Akbar Fauzan
// tugas js 7 no 2 : input nama mahasiswa

#include <stdio.h>

int main(){
	char nama_mahasiswa[30][20];
	int banyak_siswa;
	
	printf("Ketikkan banyak siswa : ");
	scanf("%d", &banyak_siswa);
	printf("\n");
	
	for(int i = 1; i <= banyak_siswa; i++){
		printf("Ketikkan nama mahasiswa : ");
		scanf("%s", &nama_mahasiswa[i]);
	}
	
	printf("\n");
	
	for(int i = 1; i <= banyak_siswa; i++){
		printf("Mahasiswa ke %i : %s\n", i, nama_mahasiswa[i]);
	}
	
	return 0;
}
