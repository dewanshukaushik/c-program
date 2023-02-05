#include<stdio.h>
#include<conio.h>
void main()
{
    float balance,amount;
    char gender;
    printf("enter the gender ");
    scanf("%c",&gender);
     printf("Enter the  balance  ");
     scanf("%f",&balance );
    if(gender=='F' || gender=='f')
       {
       
          if (balance>=5000)
          {
          amount=(5*balance)/100;
          printf("bonus = %f ",amount );
              
          }
          else {
          amount=(2/100)*balance;
          printf("bonus = %f ",amount );
          }

       }
    else 
    { 
        amount=(2/100)*balance;
          printf("bonus = %f ",amount );
    }
    getch();
    
}
