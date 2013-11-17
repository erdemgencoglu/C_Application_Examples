#include <stdio.h>
#include <conio.h>

void main()
{

	printf(" 1 - Toplama\n 2 - Cikarma\n 3 - Bolme\n 4 - Carpma\n");

	int a,sayi1,sayi2;
	int toplam,fark,carpim;
	float bolum;
	scanf("%d",&a);
	
	switch(a)

	{
	case 1 : 
				
				printf("\t\t(--Toplama--)\n\n");
				printf("Birinci sayiyi girinz :");
				scanf("%d",&sayi1);
				printf("Ikinci sayiyi girinz :");
				scanf("%d",&sayi2);
				toplam= sayi1+sayi2;
				printf("Sonuc =%d\n",toplam);
				break;
	case 2 :

				printf("\t\t(--Cikarma--)\n\n");
				printf("Birinci sayiyi girinz :");
				scanf("%d",&sayi1);
				printf("Ikinci sayiyi girinz :");
				scanf("%d",&sayi2);
				fark= sayi1-sayi2;
				printf("Sonuc =%d\n",fark);
				break;
	case 3 :
				
				printf("\t\t(--Bolme--)\n\n");
				printf("Birinci sayiyi girinz :");
				scanf("%d",&sayi1);
				printf("Ikinci sayiyi girinz :");
				scanf("%d",&sayi2);
				bolum=(float)sayi1/sayi2;
				printf("Sonuc =%f\n",bolum);
				break;
	case 4 :
	
				
				printf("\t\t(--Carpma--)\n\n");
				printf("Birinci sayiyi girinz :");
				scanf("%d",&sayi1);
				printf("Ikinci sayiyi girinz :");
				scanf("%d",&sayi2);
				carpim= sayi1 * sayi2;
				printf("Sonuc =%d\n",carpim);
				break;
	

	default :

		printf(" Boyle Bir Seceneyiniz Yok ? Lutfen tekrar deneyiniz!");
	
		break;
	}
	getch();

}
