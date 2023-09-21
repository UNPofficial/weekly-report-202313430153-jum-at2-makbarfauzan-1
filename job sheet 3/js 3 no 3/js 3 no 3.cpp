
// Created by 23343075_Muhamad Akbar Fauzan

#include <stdio.h>
#include <stdlib.h>

int main(){
	const float phi = 3.14;
	float d = 12;
	float r, v ,l;
	
	printf("Diketahui diameter bola : 12 cm\n\n");
	printf("Maka\n");
	
	r = d / 2;
	v = 4.0 / 3.0 * phi * r*r*r;
	l = 4.0 * phi * r*r;
	
	printf("Volume bola basket		: %.2f cm^3\n", v);
	printf("Luas permukaan bola basket	: %.2f cm^2", l);
	
	return 0;
}
