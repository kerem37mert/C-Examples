#include <stdio.h>

int topla(int *n1, int *n2);
int cikar(int *n1, int *n2);
int carp(int *n1, int *n2);
float bol(int *n1, int *n2);

int main()
{
    int num1, num2;
    int islem;
    int *p1, *p2;

    printf("1. sayi:\n");
    scanf("%d",&num1);
    printf("2. sayi:\n");
    scanf("%d",&num2);
    printf("islemi giriniz: 1)+\t2)-\t3)*\t4)/\n");
    scanf("%d",&islem);

    p1 = &num1;
    p2 = &num2;


    switch(islem)
    {
        case 1:
            printf("%d",topla(p1, p2));
            break;
        case 2:
            printf("%d",cikar(p1, p2));
            break;
        case 3:
            printf("%d",carp(p1, p2));
            break;
        case 4:
            printf("%f",bol(p1, p2));
            break;
    }
    return 0;
}

int topla(int *n1, int *n2)
{
    return *n1 + *n2;
}

int cikar(int *n1, int *n2)
{
    return *n1 - *n2;
}

int carp(int *n1, int *n2)
{
    return *n1 * *n2;
}

float bol(int *n1, int *n2)
{
    return *n1 / *n2;
}

