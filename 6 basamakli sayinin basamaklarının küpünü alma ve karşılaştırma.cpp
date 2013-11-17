#include<stdio.h>
#include<stdlib.h>

int main()
{
        int girilenSayi,bas6,bas5,bas4,bas3,bas2,bas1,temp;

        printf("Bir sayi giriniz : ");
        scanf_s("%d",&girilenSayi);

        bas6 = girilenSayi / 100000;
        printf("6. basamaktaki rakam %d\n",bas6);

        temp = girilenSayi - bas6*100000;
        bas5 = temp / 10000;
        printf("5. basamaktaki rakam %d\n",bas5);

        temp = temp - bas5*10000;
        bas4 = temp / 1000;
        printf("4. basamaktaki rakam %d\n",bas4);

        temp = temp - bas4*1000;
        bas3 = temp / 100;
        printf("3. basamaktaki rakam %d\n",bas3);

        temp = temp - bas3*100;
        bas2 = temp / 10;
        printf("2. basamaktaki rakam %d\n",bas2);

        temp = temp - bas2*10;
        bas1 = temp/1;
        printf("1. basamaktaki rakam %d\n",bas1);

        temp = (bas1*bas1*bas1)+(bas2*bas2*bas2)+(bas3*bas3*bas3)+(bas4*bas4*bas4)+(bas5*bas5*bas5)+(bas6*bas6*bas6);
        printf("Toplam = %d\n",temp);

        if(girilenSayi == temp)
                printf("Sayiniz ayni...\n");
        else
                printf("Sayi farkli...\n");

        system("pause");
        return 0;
}
