/*
	5 elemanl� bir tamsay� dizisini okuyan ve dizinin ilk
	eleman�n� klavyeden girilen bir say� ile de�i�tiren ve
	dizinin sonraki her eleman�n� bir �ncekinin iki kat�yla
	de�i�tiren bir C program� yaz�n
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
