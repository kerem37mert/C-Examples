#include <stdio.h>

int main()
{
    char cumle[100];
    int kelime = 1;
    char *p;
    p = &cumle;

    printf("cumle gir:\n");
    gets(cumle);

    int i = 0;

    while(*(p+i) != '\0')
    {
        if(*(p+i) == ' ')
        {
            kelime++;
        }
        i++;
    }

    printf("%d",kelime);

    return 0;
}
