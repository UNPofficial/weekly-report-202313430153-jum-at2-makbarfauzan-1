
//Created by 23343075_Muhamad Akbar Fauzan

#include <stdio.h>

//membuat selamat datang

int main() {
	
	char nama[20];
	
	printf("Hello, siapa nama lengkapmu ?\n");
	scanf("%[^\n]s", &nama);
	
	printf("\n\n");
	
	printf("Selamat datang %s\n\n", nama);
	
	return 0;
}

