/*
	7 elemanl� bir diziyi okuyan ve 0'a e�it veya daha k���k bir
	de�ere sahip dizi elemanlar�n� ve bulunduklar� konumlar�
	ekrana yazd�ran bir C program� yaz�n.
*/

#include <stdio.h>

int main(){

    int dizi[7];

    for(int i=0; i<7; i++)
    {
        printf("%d. sayiyi gir\n",i+1);
        scanf("%d",&dizi[i]);
    }

    for(int i=0; i<7; i++)
    {
        if(dizi[i] <= 0)
        {
            printf("konum: %d -- sayi: %d",i,dizi[i]);
        }
    }

    return 0;
}
