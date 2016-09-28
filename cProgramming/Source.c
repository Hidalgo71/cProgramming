#include <stdio.h>
#define PI 3.14159f					//GLOBAL DEGISKEN TAMINLAMA (Değiştekn isimleri her zaman büyük harflarle!)

int main()
{
	float x, ySonuc, radius, volume;			//Yarıçap=RADIUS, Hacim= VOLUME
												//KÜPÜN HACMİ & Volume Of Cube
	printf("Enter The Radius:");				
	scanf_s("%f", &radius);
	volume = (4.0f / 3.0f)*PI*radius*radius*radius;
	printf("Volume:%.1f\n\n", volume);
												//POLİNOM & POLYNOMIAL
	printf("Enter The Number:");
	scanf_s("%f", &x);							//
	ySonuc = (3 * x*x*x*x*x) + (2 * x*x*x*x) - (5 * x*x*x) - (x*x) + (7 * x) - 6;	//Amele Hesaplaması
	printf("Polinomial Rasult: %f\n", ySonuc);

	system("PAUSE");
	return 0;
}
