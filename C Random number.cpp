#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
        srand(time(NULL));//srand komutu rsatgele sayı üretmeyi sağlar
        for (int i = 0; i < 100;i++)//0 ile 100 arası tekrarlanır
        {
                printf("%d\n", rand() %100);//üretile nsayıları ekrana yaz 100 e bölümünden kalanı sonuç int tipinde olsun diye yazdık
        }
        system("pause");

}
