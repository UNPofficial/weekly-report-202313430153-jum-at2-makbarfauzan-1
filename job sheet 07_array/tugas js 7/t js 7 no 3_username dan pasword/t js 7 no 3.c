// created by 23343975_Muhamad Akbar Fauzan
// tugas js 7 no 3 : username dan password

#include <stdio.h>
#include <string.h>

char username[20];
char password[20];

int main(){
	printf("=====PROGRAM LOGIN=====\n\n");
	printf("USERNAME : ");
	scanf("%s", &username);
	printf("PASSWORD : ");
	scanf("%s", &password);
	printf("\n\n");
	
	if(strcmp(password, "manusiaSalmon") == 0){
		printf("Berhasil login\n");
	}
	else{
		printf("Password salah\n");
	}
	return 0;
}