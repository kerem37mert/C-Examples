#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    int kucukSayi;
    int toplam = 0;

    printf("Birinci sayiyi giriniz \n");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz \n");
    scanf("%d",&sayi2);

    if(sayi1 < sayi2)
    {
        kucukSayi = sayi1;
    }
    else
    {
        kucukSayi = sayi2;
    }

    for(int i=2; i<=kucukSayi; i++)
    {
        if(sayi1 % i == 0 && sayi2 % i ==0)
        {
            toplam++;
        }
    }

    if(toplam == 0)
    {
        printf("%d ve %d aralarinda asaldir", sayi1, sayi2);
    }
    else
    {
        printf("%d ve %d aralarinda asal degildir", sayi1, sayi2);
    }

    return 0;
}