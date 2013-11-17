#include<stdio.h>
#include<conio.h>

void maim()
{
	int girilen,fak=1;
	printf("sayiniz: ");
	scanf_s("%d", &girilen);
	for (int a = 2; a < girilen; a++)
	{
		fak = fak*a;
	}
	printf("sonuc=%d",fak);

	_getch;
}
