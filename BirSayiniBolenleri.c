#include <stdio.h>

void tumBolen(int sayi);

int main()
{
	int sayi1;
	printf("Bir sayi giriniz\n");
	scanf("%d",&sayi1);
	
	tumBolen(sayi1);

	return 0;
}


void tumBolen(int sayi)
{
	int i;
	for(i=1; i<=sayi; i++)
	{
		if(sayi % i == 0)
		{
			printf("boleni: %d\n",i);
			printf("boleni: %d\n",-i);
		}
	}
	
}
