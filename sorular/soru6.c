/*
	Kullan�c�dan 5 tamsay�y� kabul eden ve en y�ksek de�eri 
	ve giri� konumunu bulan bir C program� yaz�n.
*/

#include <stdio.h>

int main(){

    int sayilar[5];
    int konum ,sayi;

    for(int i=0; i<5; i++){
        printf("%d. sayiyi giriniz\n",i+1);
        scanf("%d",&sayilar[i]);
    }

    konum = 0;
    sayi = sayilar[0];

    for(int i=1; i<5; i++){
        if(sayilar[i] > sayi){
            sayi = sayilar[i];
            konum = i;
        }
    }

    printf("konum: %d\tsayi: %d",konum,sayi);



    return 0;
}
