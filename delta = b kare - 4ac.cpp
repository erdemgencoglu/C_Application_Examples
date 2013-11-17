#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
	float a, b, c, sonuc;
	printf("------Delta formulunu hesaplama programi------\n");
	
	printf("a sayisini giriniz: ");
	scanf_s("%f", &a);
	printf("b sayisini giriniz: ");
	scanf_s("%f",&b);
	printf("c sayisini giriniz: ");
	scanf_s("%f",&c);
	sonuc =sqrt(a + b) - 2 * a*b / (pow(b, 2) - 4 * a*c);
	printf("Sonuc:%f\n",sonuc);
	if (sonuc <= 0)
		printf("Delta esittir 0");
	system("pause");
	

}
