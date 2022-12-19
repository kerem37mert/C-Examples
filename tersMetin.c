/** Metinsel Bir Ýfadeyi Ters Çevirme **/

#include <stdio.h>
int myStrlen(char yazi[]);

int main()
{
    char yazi[100];
    int uzunluk;
    char tpm;

    printf("Bir yazi giriniz\n");
    gets(yazi);

    uzunluk = myStrlen(yazi);

    for(int i=0; i<=(uzunluk-1)/2; i++)
    {
        tpm = yazi[uzunluk-1-i];
        yazi[uzunluk-1-i] = yazi[i];
        yazi[i] = tpm;
    }

    puts(yazi);

    return 0;
}

int myStrlen(char yazi[])
{
    int i = 0;
    while(yazi[i] != '\0')
    {
        i++;
    }

    return i;
}
