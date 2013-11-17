#include<stdio.h>
#include<stdlib.h>

int main()
{
        int x,y,z;

        printf("X sayisini giriniz : ");
        scanf_s("%d",&x);
        printf("Y sayisini giriniz : ");
        scanf_s("%d",&y);

        z=x;
        x=y;
        y=z;

        printf("x = %d y = %d\n",x,y);


        return 0;
}
