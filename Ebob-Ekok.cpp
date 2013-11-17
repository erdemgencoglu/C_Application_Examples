#include<stdio.h>
int main()
{
  int birinciSayi,ikinciSayi,num1,num2;
        printf("\nEnter two numbers to find EKOK:");
        scanf_s("%d %d",&birinciSayi,&ikinciSayi);
        num1=birinciSayi,num2=ikinciSayi;
        while(num1!=num2){
                if(num1>num2)
                        num1=num1-num2;
                else
                        num2=num2-num1;
        }
        printf("EKOK = %d\n",birinciSayi*ikinciSayi/num1);


        //EBOB bulma kısmı...
        int x,y,m,i;

        printf("Enter two number to find EBOB: ");

        scanf_s("%d %d",&x,&y);
        if(x>y)
                m=y;
        else
                m=x;

        for(i=m ; i >= 1; i--){
                if(x%i == 0 && y%i == 0)
                {
                        printf("\nEBOB of two number is : %d\n",i) ;
                        break;
                }
        }


  return 0;
}
