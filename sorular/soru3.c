/*
	1'den baþlamak üzere klavyeden girilen deðere kadar olan
	çift sayýlarýn her birinin karesini bulan ve yazdýran bir C
	programý yazýnýz.
*/

#include <stdio.h>

void ciftKare(int n)
{
    int i =1;

    do
    {
        if(i%2 == 0)
        {
            printf("%d\n",i*i);

        }
        i++;
    }
    while(i<=n);
}

int main(){

    int sayi;

    printf("Bir sayi giriniz");
    scanf("%d",&sayi);

    ciftKare(sayi);


    return 0;
}

