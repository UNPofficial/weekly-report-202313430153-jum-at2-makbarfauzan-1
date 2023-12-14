// created by 23343975_Muhamad Akbar Fauzan
// latihan 6 js 8 : fungsi rekrusif

#include <stdio.h>

int sum(int n);

int main(){
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    
    return 0;
}

int sum(int num){
    if (num!=0)
        return num + sum(num-1); // fungsi sum() memanggil dirinya sendiri
    else
        return num;
}