#include<stdio.h>
#include<conio.h>
 void main()
 {
    float P,R,T,SI ;
   
    printf("ENTER THE PRINCIPLE VALUE ");
    scanf("%f",&P);
    printf("\nENTER THE INTEREST RATE ");
    scanf("%f",&R);
    printf("\nENTER TH TIME ");
    scanf("%f",&T);
    SI=P*R*T;
    SI=SI/100;
    printf("SIMPLE INTEREST= %f",SI);
    return;
 }
