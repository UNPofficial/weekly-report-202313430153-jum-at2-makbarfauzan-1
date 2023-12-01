//Created by 23343075_Muhamad Akbar Fauzan
//latihan 5 js 10 : struct ke dalam fungsi

#include <stdio.h>

struct student{
	char name[50];
	int age;
};

//int display(struct student s);
int main (){
	struct student s1;
	
	printf("Enter name	: ");
	scanf("%[^\n]%*c", s1.name);
	
	printf("Enter age	: ");
	scanf("%d", &s1.age);
	
	display(s1); //passing structure as an argument
}

// membuat fungsi dengan struct sebagai parameter
int display(struct student s){
	printf("\nDisplaying information\n");
	printf("Name	: %s", s.name);
	printf("\nRoll	: %d", s.age);
	
}