/*
	7 elemanlý bir diziyi okuyan ve 0'a eþit veya daha küçük bir
	deðere sahip dizi elemanlarýný ve bulunduklarý konumlarý
	ekrana yazdýran bir C programý yazýn.
*/

#include <stdio.h>

int main(){

    int dizi[7];

    for(int i=0; i<7; i++)
    {
        printf("%d. sayiyi gir\n",i+1);
        scanf("%d",&dizi[i]);
    }

    for(int i=0; i<7; i++)
    {
        if(dizi[i] <= 0)
        {
            printf("konum: %d -- sayi: %d",i,dizi[i]);
        }
    }

    return 0;
}
