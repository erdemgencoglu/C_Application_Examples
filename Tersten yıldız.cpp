#include<stdio.h>
#include<conio.h>
int main()
{
        printf("\n\n");

        for (int i = 7; i >= 0 ; i--)
        {
                for (int j = 0; j < i; j++)
                {
                        printf(" ");
                }
                for (int k = i; k < 7; k++)
                {
                        printf("*");
                }
                printf("\n");
        }
        
        printf("\n\n");
        _getch();
        return 0;
}
