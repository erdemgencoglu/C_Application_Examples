#include <stdio.h>
#include <conio.h>

void main()
{
	int bb, y, o, b, sayi, g;
	printf("Bir syi giriniz:");
	scanf_s("%d", &sayi);
	if (sayi > 99 && sayi < 999)
	{
		y = sayi / 100;
		g = sayi % 100;
		o = g / 10;
		b = g % 10;
		printf("yuzler =%d\n", y);
		printf("onlar =%d\n", o);
		printf("Birler =%d\n", b);

		if (y > o && y > b)printf("en buyuk olan sagdan 3. sayi ");
		if (o > b && o > y)printf("en buyuk olan sagdan 2. sayi ");
		if (b > o && b > y)printf("en buyuk olan sagdan 1. sayi ");

	}

	else
		printf("sayi 3 basamakli degil");

	_getch();
}
