// created by 23343975_Muhamad Akbar Fauzan
// latihan 12 js 7 : string strcpy

#include <stdio.h>
#include <string.h>

int main(){

    char title[] = "Belajar String.h pada Bahasa C";
    char title_copy[20];

    // copy string title ke title_copy
    strcpy(title_copy, title);

    // maka sekarang title_copy akan berisi:
    printf("isi title_copy: %s\n", title_copy);

	return 0;
}