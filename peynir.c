#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct aile
{
	int peynir_id;//aile yapımızın peynir_Id si
	int peynir_oy; //aile yapımızın oy_Id elemanı
}aile_l[10];// mizi 10 elamanlık bir dizi olarak tanımladım hepsine tektek ulaşmak kolay olsun diye

void main()
{
	srand(time(NULL));
  	FILE *dosya;
    int aileDeger[10]={0,0,0,0,0,0,0,0,0,0};// 10 ailenin toplam puanlarını içeren dizimiz.
    int toplamPuan[8] = {0,0,0,0,0,0,0,0};// 8 urununun toplam puanlarını içerem dizimiz.
    dosya= fopen("puanlar.txt","w+");//puanlar.txt formatındaki dosyamızı write modunda açar. 
   
if(dosya == NULL)//dosyanın açılış kontrolu
{
 printf("Dosya acilamadi...\n");
}
else
{
	int i = 0,j = 0;
	for (; i < 10; i++)//10 aileye değer atadığım for yapısı
	{
 		for (; j < 8; j++)//10 ailenin 8 ürüne verdiği puan kısmı
 		{
		aile_l[i].peynir_id = j;//aile i nin peynir j ye verdiği puan
		aile_l[i].peynir_oy =rand()%8 + 1;//aile i nin peynire verdiği oy random olarak atanıyor
		 if(aile_l[i].peynir_id == j)
			toplamPuan[j] = toplamPuan[j] + aile_l[i].peynir_oy;//peynir lere verilen puanlar toplam puana yazıdırılıyor
		fprintf(dosya,"%d %d %d\n",i,j,aile_l[i].peynir_oy);// dosyaya yazıdırılıyor
		aileDeger[i] = aileDeger[i] + aile_l[i].peynir_oy;//aile puanlarıda aile puan dizimize yazdırılıyor.
		} j = 0;



	}
}
/*Bu for yapısı 1-10 kadar olan ailenin verdiği puanları ekrana yazdırır.*/
  int p = 0;
  for (; p < 10; p++)
        {
                printf("aileDeger[%d] = %d\n",p,aileDeger[p]);
        }
/*---------------------------------------------------------------------------*/
  		int mAile = aileDeger[0];// Şimdide ailelerimizin verdiği puanları sıralıyoruz bunun için  minaile dizisini oluşturduk
        int ilkD; //burada min değerini sıralayarak bulduk.
	//ilD burada kaçıncı aile olduğunu bulmamıza yarayan değişken
        int k = 1;
        for (; k < 10; k++)
        {
                if(aileDeger[k] < mAile)
                {
                        mAile = aileDeger[k];
                        ilkD = k;
                }
        }
     
/*------------------------------------------------------------------------*/
        int max = toplamPuan[0];//toplam puan dizisini tanımladık 8 ürün için
        int indis;// indis değişkenini urünün hangi sırda olduğunu bulmak için atadım.
        int l = 0;
        for (; l < 8; l++)// bu forda 8 ürünün puanını sıraladık ve en yükseğini bulduk.
        {
                printf("toplam[%d] = %d\n",l,toplamPuan[l]);
                if(toplamPuan[l] > max)
                {
                        max = toplamPuan[l];
                        indis = l;
                }
        }
/*----------------------------------------------------------------------*/
  printf("En cok begenilen urun = %d ve kodu : %d\n",max,indis);//ekrana ençbe urunu ve kaçıncı ürün olduğunu yazn program
  printf("En az begenen aile = %d ve kodu : %d\n",mAile,ilkD);//en az beğenen aile ve kaçıncı aile olduğu
  fclose(dosya);



  dosya = fopen("puanlar.txt","a+");//puanlar dosyası
   
   int aileNo=0;
   int peynirNo=0;
   int peynirPuan=0;
  
   while(!feof(dosya))//Dosya sonu belirten feofa kadar okutma
    {
     fscanf(dosya,"%d%d%d",&aileNo,&peynirNo,&peynirPuan);//bunlar dosyadan okutuyoruzç
  	}
  FILE *dosya2;
  dosya2= fopen("sonuclar.txt","w+");//puanlar sonuc dosyasında tutulacağı için buraya yazdırılmıştır.
  fprintf(dosya2,"En cok begenilen urun : %d ve degeri : %d\n",indis,max);
  fprintf(dosya2,"En az begenen aile : %d ve kodu : %d\n",mAile,ilkD);
  
}
