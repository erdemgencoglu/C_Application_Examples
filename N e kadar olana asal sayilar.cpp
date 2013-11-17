//12253030_Erdem_Gençoğlu
/*Kullanıcının girdiği N sayısına kadar olan asal sayıları bulan ve adedini gösteren program*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int girilendeger, carp, c,asalsorgu, toplamS = 0;
	printf("N sayisina kadar olan asal sayilar icin N sayisini giriniz : ");
	scanf_s(" %d", &girilendeger);
	if (girilendeger > 1)
	{
		for (carp = 2; carp < girilendeger; carp++)
		{
			asalsorgu = 1;
			for (c = 2; c < carp; c++)
			{
				if (carp % c == 0)
				{
					asalsorgu = 0;
					break;
				}
			}

			if (asalsorgu == 1)
			{
				printf(" %d \n", carp);
				toplamS = toplamS + 1;
			}

		}
		printf("\n");
		printf("Toplam %d tane asal sayi vardir.", toplamS);
	}
	else
		printf("En kucuk asal sayi 2 dir.");
	_getch();
}
