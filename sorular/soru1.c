/*
	5 elemanl� bir tamsay� dizisi i�in klavyeden say� giri�i yapt�ran,
	her negatif veya 0 eleman� 1 ile de�i�tiren ve dizi elemanlar�n�
	yazd�ran bir C program� yaz�n.
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

