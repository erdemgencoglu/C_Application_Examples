#include <stdio.h>
#include <conio.h>

void main()
{
	int GirilenS,bolen,c=0;
	printf("Sayinizi giriniz: ");
	scanf_s("%d",&GirilenS);
	
	
		for (bolen = 2; bolen < GirilenS; bolen++)
		{
			if (GirilenS%bolen == 0)
				c++;
		}
		if (c == 0)
		{
			printf("sayi asal\n");
			if (GirilenS!=0)
			printf("%d",GirilenS);
		}
		if (c >= 1)
			printf("sayi asal degil");
		
	_getch();

}

