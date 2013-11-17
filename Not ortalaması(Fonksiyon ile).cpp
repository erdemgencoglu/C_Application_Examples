//Programda geçme notu 50 olarak hesaplanmistir.
#include <stdio.h> 
#include <conio.h>
float ortalama(float x,float y,float z);
int main()
{
	float vize,not1,not2,sonuc;
	printf("1. notu giriniz: ");
	scanf_s("%f",&not1);
	printf("2. notu giriniz: ");
	scanf_s("%f", &not2);
	printf("Vize notunu giriniz: ");
	scanf_s("%f", &vize);
	sonuc = ortalama(not1, not2, vize);
	printf("Ortalamaniz = %5.2f dir.\n", sonuc);
	if (sonuc>49.9)
	{
		printf("Tebrikler dersi gectiniz..... \n");
	}
	if (sonuc<50)
	{
		printf("Dersten kaldiniz. Daha cok calismalisiniz..... \n");
	}

	_getch();
}
float ortalama(float x,float y,float z)
{
	float vizeler,toplam;
	float ort1,ort2;
	ort1 = (x + y)*0.4;
	ort2 = z*0.6;
	toplam = ort1 + ort2;
	return toplam;
}
