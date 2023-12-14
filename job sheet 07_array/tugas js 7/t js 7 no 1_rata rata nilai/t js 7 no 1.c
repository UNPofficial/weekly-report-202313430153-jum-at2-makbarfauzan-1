// created by 23343975_Muhamad Akbar Fauzan
// tugas js 7 no 1 : rata2 nilai 20 mahasiswa memakai array

#include <stdio.h>

int main (){
	int nilai_mahasiswa[20] = {79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98};
	
	int length = sizeof(nilai_mahasiswa) / sizeof(*nilai_mahasiswa);
	int sum = 0;
	
	
	for(int i = 0; i < length; i++){
		sum += nilai_mahasiswa[i];
	}
	

	float rata_rata = (float)sum / (float)length;
	
	printf("Rata rata nilai mahasiswa adalah : %.2f\n", rata_rata);
	
	return 0;
}