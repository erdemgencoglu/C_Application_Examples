#include <stdio.h>
#include <conio.h>

int kare(int x);
void main()
{
	int sayi,sonuc;
	printf("Karesini bulmak istediginiz sayi(1-10 arasi): ");
	scanf_s("%d", &sayi);
	sonuc = kare(sayi);
	printf("%d 'nin karesi %d dir. ",sayi,sonuc);
	_getch();
}
int kare(int x)
{
	int sayilar[10][2] = {1,1,2,4,3,9,4,16,5,25,6,36,7,49,8,64,9,81,10,100};
	int sonuc2=0;
	for (int i=0;i<10;i++)
	{
		if (sayilar[i][0] == x)
		{
			sonuc2 = sayilar[i][1];
		}
	}
	return sonuc2;
}
