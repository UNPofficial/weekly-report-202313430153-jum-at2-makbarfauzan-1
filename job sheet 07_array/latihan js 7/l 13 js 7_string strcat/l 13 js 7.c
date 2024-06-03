// created by 23343975_Muhamad Akbar Fauzan
// latihan 13 js 7 : string strcat

#include <stdio.h>
#include <string.h>

int main(){

    char nama[] = "Agariadne D. S.";
    char gelar[] = ", S.Kom., M.Pd.T.";

    strcat(nama, gelar);

    printf("Nama lengkap\t: %s\n", nama);
	
	return 0;
}