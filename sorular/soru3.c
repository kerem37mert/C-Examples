/*
	1'den ba�lamak �zere klavyeden girilen de�ere kadar olan
	�ift say�lar�n her birinin karesini bulan ve yazd�ran bir C
	program� yaz�n�z.
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

