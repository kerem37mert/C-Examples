#include <stdio.h>

int main()
{
    int sayi1 = 10;
    int sayi2 = 24;
    int ebob;
    int kucukSayi;
    
    if(sayi1 > sayi2){
        kucukSayi = sayi2;
    }
    else{
        kucukSayi = sayi2;
    }
    
    while(kucukSayi >= 1)
    {
        if(sayi1 % kucukSayi == 0 && sayi2 % kucukSayi == 0)
        {
            ebob = kucukSayi;
            break;
        }
         
        kucukSayi--;
    }
    printf("%d",ebob);
    return 0;
}