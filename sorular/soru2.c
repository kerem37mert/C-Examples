/*
	Verilen iki tamsay� �ifti aral���ndaki tek say�lar�n toplam�n�
	hesaplayan bir C program� yaz�n�z.
*/

#include <stdio.h>
int main(){

    int sayi1, sayi2, bSayi, kSayi, toplam=0;

    printf("bir sayi giriniz\n");
    scanf("%d",&sayi1);
    printf("bir sayi giriniz\n");
    scanf("%d",&sayi2);

    if(sayi1 > sayi2)
    {
        bSayi = sayi1;
        kSayi = sayi2;
    }
    else
    {
        bSayi = sayi2;
        kSayi = sayi1;
    }

    for(int i=bSayi; i>=kSayi; i--)
    {
        if(i%2 != 0)
        {
            toplam += i;
        }
    }

    printf("tek sayilar toplami: %d",toplam);

    return 0;
}

