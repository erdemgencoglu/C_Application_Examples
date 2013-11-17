//12253030_Erdem_Gençoğlu
/*1 den 1000 ekadar olanMükemmel sayıları gösteren program*/
/*Mükemmel sayı kendisi hariç bölenleri toplamı kendine eşit olan sayıdır*/
/*Matematiksel formülü şu şekildedir 2 üssü (p-1) x (2 üssü p)-1 dir.*/
/*Buradaki p sayısı asal bir sayı olmalıdır.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
	void main()
	{
		int  c, b, ussu,Mksayi;// değişkenlerimiz.
		printf(" 1 ile 1000 arasindaki Mukemmel sayilar\n\n");
		for (ussu = 2; ussu < 6; ussu++)//Formüldeki n sayısı 6 dan büyük olduğunda mükemmel sayılar 1000 geçer
			{//bu yüzden 6 sınırını koyduk
				b = 1;
				for (c = 2; c < ussu; c++)// bu kısım asal olup olmaması ile ilgili daha önceki programda bunu göstermiştik.
				{
					if (ussu % c == 0)
					{
						b = 0;
						break;
					}
				}
				if (b == 1)
				{
					Mksayi = pow(2, (float(ussu) -1))*(pow(2, float(ussu)) - 1);//mükemmel sayının mat. formülü
					if (Mksayi < 1000)//Mükemmel sayı 1000 den küçük olduğu sürece geçerlidir.
						printf(" %d \n", Mksayi);
				}		
			}
			_getch();
	}
