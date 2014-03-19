/*12253030_Erdem Gençoğlu_Algoritmalar ve Programlama Ödev1(Soru_2)*/
//Program VisualStudio2010 ile hazırlanmıştır.
//C dili kullanılarak yazılmıştır.
#include <stdio.h> /*Standart giriş çıkış işlemlerini barındıran kütüphanemiz*/
#include <stdlib.h>/*system("pause"); kodunun bulunduğu kütüphane(Bu kod programımızın kapanmamasını sağlar.") */

	void main()

{

	int Sayi,Binler,Yuzler,Onlar,Birler,geciciDeger;/*Basamak değişkenlerinin tanımlandığı kısım*/
	printf(" \t\t----------------------------\n");
	printf("\t\t- Basamak Cozumleme Programi -\n");//Karşılama ekranımız.
	printf(" \t\t----------------------------\n");	 
	printf(" 4 Basamakli bir sayi giriniz: ");/*Kullanıcıdan 4 basamklı sayi girmesi istenmektedir*/
	scanf_s("%d",&Sayi);/*Kullanıcının girdiği sayi 'Sayi' değişkeninin adresine tanımlanmıştır*/
	printf("\n");
	printf(" ---------------\n");
	printf(" -  Sonucunuz  -\n");
	printf(" ---------------\n");
	if(Sayi>9999 || Sayi<=999)/*Buradaki if yapısında grilen sayının 4 basamaklı olup olmadığını kontrol eder.*/	
		printf("Girdiginiz Sayi 4 basamakli degildir !\n\n ");/*Sayının 4 basamklı olmadığını kullanıcıya belirtir.*/
		else	
		{
		Binler=Sayi/1000;/*Kullanıcının girdiği sayıyı 1000'e bölerek Binler basamağındaki sayıyı buluyoruz.*/

		geciciDeger=Sayi%1000;/*geciciDeger yüzler ve birler basamağını bulmak için kullandığımız bir değişkendir.*/
		Yuzler=geciciDeger/100;/*Burada sayının 1000'e bölümünden kalanı 100'e bölerek Yuzler basamığındaki sayıyı buluyoruz.*/

		geciciDeger=Sayi%100;/*geciciDegerimiz'in enson değerinin 100 ile bölümünden kalanı buluyoruz.*/
		Birler=geciciDeger%10;/*Bulduğumuz değerin 10 ile bölümünden kalan bize Birler basamağındaki rakamı vermiş oldu.*/

		geciciDeger=geciciDeger-Birler;/*Burada geciciDegerin enson halinden birler basamağı çıkarılarak onluk sayi yanlız bırakıldı.*/
		Onlar=geciciDeger/10;/*geciciDeger 10'a bölünerek Onlar basamağındaki rakam bulunur. */

	/*Program Çıktısı*/

	printf("Cozumlenecek Sayi: %d\n",Sayi);	//Çözümlenecek sayi ekranda gösterilir.
	printf("Girilen Sayi :%d\n\n",Sayi);//Kullanıcının girdiği sayi ekranda gösterilir.
	printf("%d tane Binlik Vardir.\n",Binler);	//Sayının binlik miktarı ekranda gösterilir.
	printf("%d tane Yuzluk Vardir.\n",Yuzler);	//Sayının yuzluk miktarı ekranda gösterilir.
	printf("%d tane Onluk Vardir.\n",Onlar); //Sayının onluk miktarı ekranda gösterilir.
	printf("%d tane Birlik Vardir.\n\n",Birler);//Sayının birlik miktarı ekranda gösterilir.
		}
	system("pause");//Programın kapanması için bir tuşa basılması gerekir.
}
