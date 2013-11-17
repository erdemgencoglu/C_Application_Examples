//12253030_Erdem_Gençoğlu
/*Kullanıcının girdiği N sayısına kadar olan asal sayıları bulan ve adedini gösteren program*/

#include <stdio.h>
#include <conio.h>
/* for döngüsü ile */
/*void main()
{
int gyil = 0, Anfus, Bnufs;
Anfus = 10;	// A şehrinin nüfusu
Bnufs = 40; // B şehrinin nüfusu
for (;;)	//sonsuz döngü için ';;' kullandık.
{
if (Bnufs < Anfus) //Eğer A Şehrinin nüfusu B şehrinden küçük ise elseye geçer
{
break;
}
else//bu durumda nüfuslar güncellenir ve geçcen yıl arttırılır.
{
Anfus = Anfus*2.5; // A şehri yılda %25 artış gösteriyordu
Bnufs = Bnufs*4.8; // B şehri yılda %40 artış gösteriyordu
gyil = gyil + 1; // geçen yıl
}
}
printf("\n");
printf("%d yil sonra A sehrinin nufusu B sehrini gecer. ", gyil);
_getch();
*/
/* While döngüsü ile */
/*void main()
{
int gyil = 0, Anfus, Bnufs;
Anfus = 10;	// A şehrinin nüfusu
Bnufs = 40; // B şehrinin nüfusu
while (1)	//sonsuz döngü while içine '1' kullandık.
{
if (Bnufs < Anfus) //Eğer A Şehrinin nüfusu B şehrinden küçük ise elseye geçer
{
break;
}
else//bu durumda nüfuslar güncellenir ve geçcen yıl arttırılır.
{
Anfus = Anfus*2.5; // A şehri yılda %25 artış gösteriyordu
Bnufs = Bnufs*4.8; // B şehri yılda %40 artış gösteriyordu
gyil = gyil + 1; // geçen yıl
}
}
printf("\n");
printf("%d yil sonra A sehrinin nufusu B sehrini gecer. ", gyil);
_getch();
*/void main()
	{
		int gyil = 1, Anfus, Bnufs;
		Anfus = 10;	// A şehrinin nüfusu
		Bnufs = 40; // B şehrinin nüfusu
		do
		{
			Anfus = Anfus*2.5; // A şehri yılda %25 artış gösteriyordu
			Bnufs = Bnufs*4.8; // B şehri yılda %40 artış gösteriyordu
			gyil = gyil + 1; // geçen yıl
		} while (Bnufs > Anfus);	//sonsuz döngü while içine '1' kullandık.

		printf("\n");
		printf("%d yil sonra A sehrinin nufusu B sehrini gecer. ", gyil);

		_getch();
}
