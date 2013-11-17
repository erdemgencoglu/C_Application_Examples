
#include<stdio.h>
#include<conio.h>
int main()
{
	int girilenSayi;//Kullanıcıdan alınan deger
	int maxSayi;//Sistemdeki max sayi
	int minSayi;//Sistemdeki min sayi
	int i = 0;

	printf("Bir sayi giriniz : ");
	scanf_s("%d", &girilenSayi);//scanf_s fonksiyonuyla
	//Kullanıcıdan deger alıyoruz

	maxSayi = girilenSayi;
	minSayi = girilenSayi;

	//for (; girilenSayi != -1;)
	while (girilenSayi != -1)
	{
		if (girilenSayi > maxSayi)
			maxSayi = girilenSayi;
		if (girilenSayi < minSayi)
			minSayi = girilenSayi;

		printf("Bir sayi giriniz : ");
		scanf_s("%d", &girilenSayi);//scanf_s fonksiyonuyla
		//Kullanıcıdan deger alıyoruz

	}

	//printf("Girilen deger : %d\n",girilenSayi);//ekrana girilen degeri yazar.

	printf("Girilen sayilarin en buyugu : %d\n", maxSayi);
	printf("Girilen sayilarin en kucugu : %d\n", minSayi);
	_getch();
	return 0;
	
}
