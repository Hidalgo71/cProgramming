//KURSUN BÝRÝNDE YAPILAN YARIM

#include <stdio.h>

int main()
{
	int i;
	int fiboArray[15];
	fiboArray[0] = 1;
	fiboArray[1] = 1;

	for (i = 2; i < 15; i++)
		fiboArray[i] = fiboArray[i - 1] + fiboArray[i - 2];

	printf("Sayi Griniz:");
	scanf_s("%d", &i);
	printf("%d'th value is :%d", i, fiboArray[i - 1]);




	system("PAUSE");
	return 0;
}