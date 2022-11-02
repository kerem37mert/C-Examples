#include <stdio.h>

int main()
{
	int sayi, basamak=0;
	printf("Bir sayi giriniz\n");
	scanf("%d",&sayi);
	
	while(sayi >= 1)
	{
		sayi = sayi / 10;
		basamak++;
	}
	
	printf("%d",basamak);
	
	return 0;
}


//Basamak sayısı bulma
