/*
	5 elemanlý bir tamsayý dizisi için klavyeden sayý giriþi yaptýran,
	her negatif veya 0 elemaný 1 ile deðiþtiren ve dizi elemanlarýný
	yazdýran bir C programý yazýn.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int sayilar[5];
    int sayi;

    for(int i=0; i<5; i++)
    {
        printf("bir sayi giriniz\n");
        scanf("%d",&sayi);

        if(sayi <= 0)
            sayi = 1;

        sayilar[i] = sayi;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d",sayilar[i]);
    }

    return 0;

}

