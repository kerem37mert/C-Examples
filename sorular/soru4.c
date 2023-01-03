/*
	5 elemanlý bir tamsayý dizisini okuyan ve dizinin ilk
	elemanýný klavyeden girilen bir sayý ile deðiþtiren ve
	dizinin sonraki her elemanýný bir öncekinin iki katýyla
	deðiþtiren bir C programý yazýn
*/

#include <stdio.h>

int main(){

    int dizi[5] = {1,1,1,1,1,};

    printf("Bir sayi giriniz\n");
    scanf("%d",&dizi[0]);

    for(int i=1; i<5; i++)
    {
        dizi[i] = dizi[i-1]*2;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d\n",dizi[i]);
    }

    return 0;
}
