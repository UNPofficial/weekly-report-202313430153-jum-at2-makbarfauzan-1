// created by 23343975_Muhamad Akbar Fauzan
// latihan 15 js 7 : string strcmp

#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "Agariadne";
	char str2[] = "Agariadne";
	int hasil;
	
	// membandingkan string
	hasil = strcmp(str1, str2);
	
	if(hasil == 0){
		printf("str 1 dan str2 sama");
	}
	else{
		printf("str1 dan str 2 berbeda");
	}
	
	return 0;
}