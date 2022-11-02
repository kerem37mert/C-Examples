#include <stdio.h>

int fibonacci(int basamak)
{
	if(basamak == 1)
	{
		return 1;
	}
	else if(basamak == 0)
	{
		return 0;
	}
	else
	{
		return fibonacci(basamak - 1)  + fibonacci(basamak - 2);
	}
}

int main()
{
	int sayi, i;
	printf("bir sayi giriniz\n");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++)
	{
		printf("%d.eleman: %d\n",i,fibonacci(i));
	}
	
	return 0;
}
