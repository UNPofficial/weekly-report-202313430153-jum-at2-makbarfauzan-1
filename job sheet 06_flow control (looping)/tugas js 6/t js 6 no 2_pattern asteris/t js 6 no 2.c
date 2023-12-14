// Created by 23343075_Muhamad Akbar Fauzan
// tugas js 6 no 2 : program asteris

#include <stdio.h>

int main(){
	int n;
	
	printf("Ketikkan jumlah baris : ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	return 0;
}
