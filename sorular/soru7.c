/*
	Bir say�n�n rakamlar�n�n fak�riyelleri toplam� kendisine e�itse 
	o say�ya g��l� say� denir. G��l� say�lar� bulan C kodunu yaz�n�z.
*/

#include<stdio.h>

int faktoriyel(int n)
{
    if(n != 1)
    {
        return n * faktoriyel(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int sayi,y,o,b, tmp;

    printf("bir sayi giriniz\n");
    scanf("%d",&sayi);

    y = sayi / 100;
    tmp = sayi % 100;
    o = tmp / 10;
    b = tmp % 10;

    if(sayi == (faktoriyel(y) + faktoriyel(o) + faktoriyel(b))){
        printf("strong");
    }
    else{
        printf("not strong");
    }

}
