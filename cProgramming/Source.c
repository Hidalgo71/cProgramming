#include <stdio.h>
#define pi 3.14159f

int main()
{
	float x, ySonuc, sayi1, sayi2, aSonuc;
	int testN1, testN2, sayiTop, ucBas, uc1, uc2, uc3, ucSonuc;
	//int	j,k,l,zSonuc;															//3 BASAMAKLI FARKLI YÖNTEMIN DEGISKENLERI!
	float radius /*= 10.0f*/, volume;
	printf("Hello World. \n");

	//3 BASAMAKLI SAYININ SAYI DEGERLERINI TOPLAYAN PROGRAM!
	/*printf("Enter The 3-digit Number:"); 											//scanf_s("%1d%1d%1d", &j,&k,&l);		zSonuc = j + k + l;		printf("Result Is:%d\n", zSonuc); FARKLI YÖNTEM DIGIT BY DIGIT OKUYOR
	scanf_s("%d", &ucBas);
	uc1 = ucBas / 100;
	uc2 = (ucBas % 100) / 10;
	uc3 = ucBas % 100;
	ucSonuc = uc1 + uc2 + uc3;
	printf("Sum of Digit Number >%d\n", ucSonuc);*/
	//ORTALAMA AL
	/*printf("Sum Series:");
	scanf_s("%d", &sayiTop);
	printf("Sum is:%d\n", (sayiTop*(sayiTop + 1) / 2));*/
	//TEST
	/*printf("Test Sayilari:");
	scanf_s("%d%d", &testN1, &testN2);
	printf("Sayilar %d", testN1 + testN2);*/																		//TESTLER BURADA YAPILIR!
	//Kullanicidan 2 sayi alip ortalamasini alan KOD!
	/*printf("Enter The 1st Avarege Number:");										//TEK SATIRDA SCANF ("%f%f",&sayi1, sayi2);
	scanf_s("%f", &sayi1);
	printf("Enter The 2nd Average Number:");
	scanf_s("%f", &sayi2);
	aSonuc = (sayi1 + sayi2) / 2;
	printf("Avarage Of The Numbers:%.3f\n", aSonuc);*/
	//KÜP
	/*printf("Yaricapi Giriniz:");
	scanf_s("%f",&radius);
	volume = (4.0f / 3.0f)*pi*radius*radius*radius;
	printf("Volume:%.1f\n", volume);*/
	//POLINOM!!
	/*printf("Enter The Number:");
	scanf_s("%f", &x);

	ySonuc = (3 * x*x*x*x*x) + (2 * x*x*x*x) - (5 * x*x*x) - (x*x) + (7 * x) - 6;
	printf("Polynomial Resault: %f\n", ySonuc);*/
	//SEKIL!
	/*printf("         *\n");
	printf("  *     *\n");
	printf("   *   *\n");
	printf("    * *\n");
	printf("     *\n");*/
	system("PAUSE");
	return 0;
}
