#include <stdio.h>

int main()
{
	int sayi, basamak=0, i=1;
	printf("Bir sayi giriniz\n");
	scanf("%d",&sayi);
	
	while(i<=sayi)
	{
		i *= 10;
		basamak++;
	}
	
	printf("%d",basamak);
	
	return 0;
}
