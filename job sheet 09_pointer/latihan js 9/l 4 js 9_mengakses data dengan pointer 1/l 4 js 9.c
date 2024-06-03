// created by 23343975_Muhamad Akbar Fauzan
// latihan 4 js 9 : mengakses data dengan pointer 1

#include <stdio.h>

int main(){
	// membuat variabel score
	int score = 0;
	
	
	//membuatpointer dan referensikan dengan alamat
	//dari variabel score
	int *p_score = &score;
	
	// mengakses data variabel score dari pointer
	printf("isi *p_score = %d\n", *p_score);
	printf("isi score awal = %d\n", score);
	
	// mengubah data variabel score dari pointer
	*p_score = 5;
	
	//melihat isi variabel score
	printf("isi score setelah diubah = %d\n", score);
	
	return 0;
}