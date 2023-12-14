
//Created by 23343075_Muhamad Akbar Fauzan
//tugas js 2 no 1 : membuat selamat datang

#include <stdio.h>

int main() {
	
	char nama[20];
	
	printf("Hello, siapa nama lengkapmu ?\n");
	scanf("%[^\n]s", &nama);
	
	printf("\n\n");
	
	printf("Selamat datang %s\n\n", nama);
	
	return 0;
}

