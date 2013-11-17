#include<stdio.h>
#define PI 3.14159
#include<conio.h>
void main()
{
	float r, a;
	printf("Dairenin yaricapini giriniz:");
	scanf_s("%f", &r);
	a = PI*r*r;
	printf("\n");
	printf("Dairenin alani:%8.3f\n", a);
	getche();
}
