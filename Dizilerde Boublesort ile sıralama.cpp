#include<stdio.h>
#include<conio.h>
int main()
{
        int sayilar[6];
		int i,j,temp;
		for(i=0;i<6;i++)
		{
		printf("Sayiniz=");
		scanf_s("%d",&sayilar[i]);
		}
		for(i=0;i<6;i++)
		{
			for(j=i+1;j<6;j++)
				if(sayilar[j]>sayilar[i])
				{
					temp=sayilar[i];
					sayilar[i]=sayilar[j];
					sayilar[j]=temp;
				}
			
	
		}
		for(int k=0;k<6;k++)printf("%d\n",sayilar[k]);
		
_getch();
		return 0;}
