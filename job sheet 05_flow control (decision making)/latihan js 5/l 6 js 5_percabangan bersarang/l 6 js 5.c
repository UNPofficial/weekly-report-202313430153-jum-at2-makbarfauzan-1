// created by 23343975_Muhamad Akbar Fauzan
// latihan 6 js 5 : percabangan bersarang

#include <stdio.h>
#include <string.h>

int main(){
    char username[30], password[30];

    printf("=== Welcome to Awesome Program ===\n");
    printf("Username: ");
    scanf("%s", &username);
    printf("Password: ");
    scanf("%s", &password);

    if(strcmp(username, "petanikode") == 0){
        if(strcmp(password, "kopi") == 0){
            printf("Selamat datang bos!\n");
        } else {
            printf("Password salah, coba lagi!\n");
        }
    } else {
        printf("Anda belum terdaftar\n");
    }
	return 0;
}