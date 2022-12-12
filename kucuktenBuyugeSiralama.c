#include <stdio.h>

int main()
{
    int sayilar[10];
    int siraliDizi[10];

    for(int i=0; i<10; i++)
    {
        printf("%d. elemani giriniz\n", i+1);
        scanf("%d",&sayilar[i]);
    }

    for(int i=0; i<10; i++)
    {
        int toplam = 0;

        for(int j=0;j<10; j++)
        {
            if(sayilar[i] > sayilar[j])
            {
                toplam++;
            }
        }

        siraliDizi[toplam] = sayilar[i];
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\n", siraliDizi[i]);
    }

    return 0;
}
