/** Metinsel Bir Ýfadedeki Sesli Harfleri Bulma**/

#include <stdio.h>
int myStrlen(char yazi[]);

int main()
{
    char sesliHarf[] = {'A','a','E','e','i','I','O','o','U','u'};
    char yazi[100];
    int uzunluk;
    char bulunanSesliler[100];
    int indis=0;

    printf("Bir yazi giriniz\n");
    gets(yazi);
    uzunluk = myStrlen(yazi);

    for(int i=0; i<uzunluk;i++)
    {
        for(int j=0; j< myStrlen(sesliHarf); j++)
        {
            if(yazi[i] == sesliHarf[j])
            {
                int toplam = 0;

                for(int k=0; k<myStrlen(bulunanSesliler); k++)
                {
                    if(yazi[i] == bulunanSesliler[k])
                    {
                        toplam++;
                    }
                    break;
                }
                if(toplam == 0)
                {
                    bulunanSesliler[indis] = yazi[i];
                    indis++;
                }
                break;
            }
        }
    }

    //SESLÝ HARFLERÝ EKRANDA GÖSTERME
    for(int i=0; i< myStrlen(bulunanSesliler); i++)
    {
        printf("%c\n",bulunanSesliler[i]);
    }

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
