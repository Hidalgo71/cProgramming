#include <stdio.h>
#define pi 3.14159f

int main()
{
	float x, ySonuc, sayi1, sayi2, aSonuc;
	int testN1, testN2, sayiTop, ucBas, uc1, uc2, uc3, ucSonuc;
	//int	j,k,l,zSonuc;															//3 BASAMAKLI FARKLI YÖNTEMIN DEGISKENLERI!
	float radius /*= 10.0f*/, volume;
	int number1 = 10, number2 = 23, i;
	char ch1 = 'h', ch2;
	float f, salary = 1.500;
	double d;
	int n, n2, n3;																	//KAre Küp Tanimlari
	int xx = 5, y = 8;
	int iTest = 40;
	float fTest = 839.21f;
	printf("Hello World. \n");

																					//Matematiksel Ekran Yazdirmalari

	//float qq, ww;
	//printf("Enter The Numeros:");			//13,5,
	//scanf_s("%f%f", &qq, &ww);
	//printf("Result %f %f\n", qq, ww);
	//
	//int ee, rr;
	//float yy, tt;
	//printf("Enter The Numeros2:");			//1 , -20.3, -4.0e3
	//scanf_s("%d%d%f%f", &ee, &rr, &yy, &tt);
	//printf("Result %d %d %f %f\n", ee, rr, yy, tt);
	//
	//int ii, jj;
	//float ll, mm;									//Hocanin Testi Bu Girilecek Degerler: 3,-20.65,7 Gir!
	//printf("Enter The Numeros3:");
	//scanf_s("%d%d%f%f", &ii, &jj, &ll, &mm);
	//printf("Result %d %d %f %f\n",ii, jj, ll, mm);
	//
	//printf("The Equation=%2d+%-2d=%2d\n", xx, y, xx - y);							//Hesap Test
	//printf("|%d|%5d|%-5d|%5.3d|\n", iTest, iTest, iTest, iTest);					//Int Test			Sag Sol Basamak Sayisi Gibi Yazdirimlar!
	//printf("|%10.3f|%-5.3f|%0.2e|%-10g|\n", fTest, fTest, fTest, fTest);			//Float Test
	//Girilen Tek Sayinin Karesini ve Kübünü yazdirma!

																					//Sayinin KAre Ve Kübünü Alma

	//printf("Enter The Number:");
	//scanf_s("%d", &n);
	//n2 = n*n;
	//n3 = n*n2;
	//printf("n=%d, n squared=%d, n cubed=%d\n", n, n2, n3);

																					//Writing Character' Integer Value

	//printf("Integer representation of Character %c is: %d\n\n", ch1, ch1);
	//


																					//Hexadecimal Numbers

	//printf("Decimal: %d\n", 255);								//Write '255' as Deci Flo Hexa
	//printf("Float: %.3f\n", 255.0);										
	//printf("Hexa: %x\n", 255);
	//printf("Enter The Double :");
	//scanf_s("%f", &f);
	//printf("Your Double Number is: %6.1f\n", f);

																					//Storage of data Types

	//printf("storage size of ýnteger is %d bytes\n", sizeof(int));
	//printf("storage size of float is %d bytes\n", sizeof(float));
	//printf("storage size of double is %d bytes\n", sizeof(double));
	//printf("storage size of character is %d bytes\n", sizeof(char));

																					//Printf Usage

	//printf("%s"," Hello World \n");
	//printf("1st Character of My Name Is %c \n",'m');											//Screen Character
	//printf("An Integer Number is %d \n",71);													//Screen Integer
	//																							//Screen Float
	//printf("A Float Number: %.3f\n",7.1);
	//printf("Another Float Number is %.56f\n", 7.15441284);
	//																							//Scientific Notation
	//printf("Scientific Notation: %e \n",0.0000071);
	//																							//Use Shorter of Two Reprensentation: f And e
	//printf("Shorter Reprensentation: %g\n",3.132414718271657);
	//																							//Print an Integer PAdded on Left With 6 Digit
	//printf("%6d\n",256 );
	//																							//Print an Integer Padden on Right With Spaces To Tot
	//printf("%-6d\n",512);
	//																							//Print a Double, 2 Places of Precision, Padden With Spaces
	//printf("\n%10.2f\n",2.716587325868);
	//Mathematical Calculation

	//printf("Add: 12+34=%d\n",12+34);
	//printf("Substruction: 12-34=%d\n", 12 - 34);
	//printf("Division: 34/12=%d\n", 34 / 12);
	//printf("Division: 34/12=%.3f\n", 34.0 / 12.0);
	//printf("Multiplication: 12*34=%d\n", 12 * 34);
	//printf("Modulo: 34 mod 12=%d\n", 34%12);
	//scanf_s("%", &);
	//printf(" \n", );

																					//3 BASAMAKLI SAYININ SAYI DEGERLERINI TOPLAYAN PROGRAM!
	/*printf("Enter The 3-digit Number:"); 											//scanf_s("%1d%1d%1d", &j,&k,&l);		zSonuc = j + k + l;		printf("Result Is:%d\n", zSonuc); FARKLI YÖNTEM DIGIT BY DIGIT OKUYOR
	scanf_s("%d", &ucBas);															//YUKARIDAKÝ YÖNDEM DAHA ÝYÝ!
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