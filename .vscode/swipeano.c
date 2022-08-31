#include<stdio.h>
#include<conio.h>
 void main()
 {
   int A,B,C;
   printf( " Enter the two number ");
   scanf("%d %d",&A,&B);
    C=A;
    A=B;
    B=C;
   printf(" After swapping: A = %d, B = %d",A,B);
   getch();
 }
