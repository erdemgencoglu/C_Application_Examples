#include <stdio.h>
#include <conio.h>

int Say(int x);
void main()
{
	int sonuc, sayi;
	printf("\t\tN degerine kadar olan sayilarin toplami\n");
	printf("N sayisini giriniz: ");
	scanf_s("%d", &sayi);
	sonuc = Say(sayi);
	printf("%d ye kadar olan sayilarin toplami %d dir.", sayi, sonuc);
	_getch();
}
int Say(int sayi)
{
	int toplam = 0;
	for (int i = 0; i <=sayi; i++)
	{
		toplam = toplam + i;
	}

	return toplam;
}
