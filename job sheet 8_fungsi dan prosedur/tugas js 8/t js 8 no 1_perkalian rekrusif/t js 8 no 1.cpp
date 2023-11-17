// created by 23343975_Muhamad Akbar Fauzan
// tugas js 8 no 1 : perkalian dengan fungsi rekursif

#include <stdio.h>

int perkaliandenganpenambahan(int a, int b, int hasil){
    if (b == 0) {
        return hasil;
    }
    else {
        return perkaliandenganpenambahan(a, b - 1, hasil + a);
    }
}

int main() {
    int a, b;

    printf("Ketikkan 2 bilangan bulat dengan jarak spasi : ");
    scanf("%d %d", &a, &b);
    
    int hasil = perkaliandenganpenambahan(a, b, 0);
    
    printf("Hasil perkalian: %d\n", hasil);

    return 0;
}
