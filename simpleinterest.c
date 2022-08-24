#include<stdio.h>
#include<conio.h>
 void main()
 {
    float P,R,T,SI ;
   

    printf("ENTER THE PRINCIPLE VALUE ");
    scanf("%d",&P);
    printf("\nENTER THE INTEREST RATE ");
    scanf("%d",&R);
    printf("\nENTER TH TIME ");
    scanf("%d",&T);
    SI=P*R*T;
    SI=SI/100;
    printf("SIMPLE INTEREST= %f",SI);
    return;
 }
