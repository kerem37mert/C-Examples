#include <stdio.h>

int asalMi(int sayi){
    int toplam = 0;
    int i;
    for(i=2; i<sayi; i++)
    {
        if(sayi%i == 0)
        {
            toplam++;
        }
    }

    if(toplam == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    int n=2;
    int asalToplam;
    int bulundu;
    while(1)
    {
        if(asalMi(n) == 1)
        {
            asalToplam += n;
        }

        for(int m=1; m<asalToplam/2; m++)
        {
            if(m*m == asalToplam){
                printf("olur");
                bulundu = 1;
                break;
            }
            else{
                continue;
            }
        }

        if(bulundu == 1)
        {
            break;
        }

        n++;
    }
    return 0;
}

