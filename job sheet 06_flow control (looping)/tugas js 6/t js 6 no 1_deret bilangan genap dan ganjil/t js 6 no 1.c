// created by 23343075_Muhamad Akbar Fauzan
// tugas js 6 no 1 : Deret bilangan genap dan ganjil

#include <stdio.h>

int main(){
	int i;
	
    printf("Bilangan genap\n");
	for(int i = 0; i <= 50; i+=2){
		printf("%d ", i);
	}
	
	printf("\n\nBilangan ganjil\n");
	for (int i = 1; i <= 50; i+=2){
		printf("%d ", i);
	}
	
	return 0;
}