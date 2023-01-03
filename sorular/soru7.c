/*
	Bir sayýnýn rakamlarýnýn faköriyelleri toplamý kendisine eþitse 
	o sayýya güçlü sayý denir. Güçlü sayýlarý bulan C kodunu yazýnýz.
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
