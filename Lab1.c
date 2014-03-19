include<stdio.h>
int Vkmain();
int swapmain();
int swap(int *a, int *b);
int hesapla(int boy1, int kilo1, int cinsiyet1);
void main()
{
	int soru;
	printf("Hangi soru cevaplansın?\n");
	printf("[1]-[2]\n");
	scanf("%d",&soru);
	if (soru == 1)
	Vkmain();
	else if (soru==2)
	swapmain();
	else
	printf("Yanlıs secim");
}
int Vkmain()
{
	int cinsiyet,boy,kilo;
	printf("Cinsiyetinizi giriniz([E]=1 [K]=2)\n");
	scanf("%d",&cinsiyet);
	printf("\nBoyunuzu giriniz : ");
	scanf("%d", &boy);
	printf("Kilonuzu giriniz : ");
	scanf("%d", &kilo);
	hesapla(boy, kilo, cinsiyet);
	return 0;
}
int hesapla(int boy1, int kilo1, int cinsiyet1)
{	
	float ind=kilo1/((float)boy1*(float)boy1);;	
	printf("Vucut Kutle Indeksiniz : %f\n", ind);
	switch (cinsiyet1)
	{
	case 1:
		{if (ind < 0.00207)
		printf("Zayifsiniz. Saglik riski yok!\n");
		else if (0.00207 <= ind && ind <= 0.00264)
		printf("Normalsiniz. Risk yok.\n");
		else if (0.00265 <= ind && ind <= 0.00311)
		printf("Sismanlik sinirinda yada sismansiniz. Riskli!\n");
		else if (ind >= 0.00312)
		printf("Obezite. Ciddi derecede riskli!\n");
		break;}
	case 2:
		{if (ind < 0.00191)
		printf("Zayifsiniz. Saglik riski yok!\n");
		else if (0.00191 <= ind && ind <= 0.00258)
		printf("Normalsiniz. Risk yok.\n");
		else if (0.00259 <= ind && ind <= 0.00322)
		printf("Sismanlik sinirinda yada sismansiniz. Riskli!\n");
		else if (ind >= 0.00323)
		printf("Obezite. Ciddi derecede riskli!\n");
		break;}
	}

	return 0;
}
int swapmain()
{
	int x, y;
	int *a = &x,*b = &y;
	printf("X sayisini giriniz : ");
	scanf("%d", &x);
	printf("Y sayisini giriniz : ");
	scanf("%d", &y);
	swap(a, b);
	printf("x = %d y = %d\n", x, y); 
	return 0;
}
int swap(int *a, int *b)
{
	int z;
	z = *a;
	*a = *b;
	*b = z;
	return *a, *b;
}

