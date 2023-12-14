// created by 23343975_Muhamad Akbar Fauzan
// latihan 7 js 2 : fgets

#include <stdio.h>

int main(){
	char name[50], email[50];
	
	printf("Nama	: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Email	: ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n---------------------------------------\n");
	printf("Nama anda	: %s", name);
	printf("Alamat email	: %s", email);
	
	return 0;
}