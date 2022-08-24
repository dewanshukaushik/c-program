#include<stdio.h>
#include<conio.h>
 void main()
 {
    int P,R,T ;
    float SI;
    printf("ENTER THE PRINCIPLE VALUE");
    printf("\nENTER THE INTEREST RATE");
    printf("\nENTER TH TIME");
    scanf("%d%d%d",&P,&R,&T);
    SI=P*R*T/100;
    printf("SIMPLE INTEREST= %f",SI);
    getch();
 }
