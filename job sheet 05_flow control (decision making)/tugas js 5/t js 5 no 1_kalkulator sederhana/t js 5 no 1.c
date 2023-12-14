// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 5 no 1 : Program kalkulator sederhana

#include <stdio.h>

int main (){
	char operasi;
	double bil1, bil2;
	
	printf("=====PROGRAM KALKULATOR SEDERHANA=====\n");
	printf("\nPilih operasi (+, -, *, /) : ");
	scanf("%c", &operasi);
	printf("Masukkkan dua bilangan dengan jarak spasi : ");
	scanf("%lf %lf", &bil1, &bil2);
	
	switch(operasi) {
		case '+' :
			printf("%.1lf + %.1lf = %.1lf", bil1, bil2, bil1 + bil2);
			break;
		case '-' :
			printf("%.1lf - %.1lf = %.1lf", bil1, bil2, bil1 - bil2);
			break;
		case '*' :
			printf("%.1lf * %.1lf = %.1lf", bil1, bil2, bil1 * bil2);
			break;
		case '/' :
			printf("%.1lf / %.1lf = %.1lf", bil1, bil2, bil1 / bil2);
			break;
		default :
			printf("Operasi tidak tersedia");
	}
	return 0;
}