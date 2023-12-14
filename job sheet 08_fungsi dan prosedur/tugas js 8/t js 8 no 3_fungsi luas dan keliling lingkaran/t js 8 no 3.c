// created by 23343975_Muhamad Akbar Fauzan
// tugas js 8 no 3 : menghitung luas dan keliling lingkaran

#include <stdio.h>

#define phi 3.14

float luas(float r){
	float luas = phi * r * r;
	printf("Luas lingkaran : %.2f cm^2", luas);
	return 0;
}

float keliling(float r){
	float keliling = 2 * phi * r;
	printf("Keliling lingkaran : %.2f cm^2", keliling);
	return 0;
}

int main (){
	float r;
	int menu;
	
	printf("====PROGRAM RUMUS LINGKARAN====\n\n");
	printf("1. Luas lingkaran\n2. keliling lingkaran\n\n");
	
	printf("Pilihan anda : ");
	scanf("%i", &menu);
	
	switch(menu){
		case 1 :
			printf("\nKetikkan jari jari : ");
			scanf("%f", &r);
			luas(r);
			break;
		case 2 :
			printf("\nKetikkan jari jari : ");
			scanf("%f", &r);
			keliling(r);
			break;
		default :
			printf("Rumus tidak tersedia");
	}
	return 0;
}