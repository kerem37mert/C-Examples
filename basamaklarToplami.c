#include <stdio.h>

int topla(int number) {
    if (number / 10 < 1)
        return number;

    return number % 10 + topla(number / 10);
}

int main() {
    int number;
    printf("Bir sayi giriniz: ");
    scanf("%d",&number);

    int toplam = topla(number);
    printf("Basmaklari Toplami: %d", toplam);

    return 0;
}