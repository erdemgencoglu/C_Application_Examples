#include <stdio.h>
#include <stdlib.h>

void main()
{
	float kilo, boy, vki;

	int in;
	printf("\t\tVucud Kitle Indeksi Hesaplama\n");
	printf("Kilonuzu Giriniz: ");
	scanf_s("%f", &kilo);
	printf("Boyunuzu Giriniz: ");
	scanf_s("%f", &boy);
	printf("Cinsiyetinizi (1)=E (2)=K tuslarinin kullanarak giriniz: ");
	
	scanf_s("%d", &in);
	printf("\n");
	switch (in)
	{

	case 1:
		{
			vki = kilo / (boy*boy);
			printf("Vucud kitle indeksi=%f\n", vki);
			if (vki < 20.7)
				printf("Zayifsiniz.Saglik riski!\n");
			if (vki > 20.7 && vki <26.4)
				printf("Normalsiniz.Risk yok.\n");
			if (vki > 26.5 && vki < 31.1)
				printf("Sismanlik sinirinda yada sismansiniz.Riskli\n");
			if (vki >31.2)
				printf("Obezite.Ciddi derecede riskli.\n");
		  }
		break;

	case 2:
		{
			vki = kilo / (kilo*kilo);
			printf("Vucud kitle indeksi=%f\n", vki);
			if (vki < 19.1)
				printf("Zayifsiniz.Saglik riski!\n");
			if (vki > 19.1 && vki <25.8)
				printf("Normalsiniz.Risk yok.\n");
			if (vki > 25.9 && vki < 32.2)
				printf("Simanlik sinirinda yada sismansiniz.Riskli\n");
			if (vki >32.3)
				printf("Obezite.Ciddi derecede riskli.\n");
		  }
		break;
	default:
		printf("");
	}

	system("pause");
}
