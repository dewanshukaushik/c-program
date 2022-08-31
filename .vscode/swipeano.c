#include<stdio.h>
#include<conio.h>
 void main()
 {
   int X,Y,TEMP;

     printf(" Enter Value of x = ");
    scanf("%d", &X);

    printf("\n Enter Value of y = ");
    scanf("%d", &Y);

    TEMP=X;
    X=Y;
    Y=TEMP;

   printf(" \n After swapping: X= %d, Y = %d",X,Y);

   getch();
 }
