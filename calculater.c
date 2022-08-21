#include <stdio.h>
int main(){
   char Operator;
   float num1, num2, result = 0;
   printf("\n Enter any one operator like +, -, *, / : ");
   scanf("%c", &Operator);
   printf("Enter the values of Operands num1 and num2 \n : ");
   scanf("%f%f", &num1, &num2);
   switch(Operator){
      //for addition
      case '+': result = num1 + num2;
         break;
         //for subtract
      case '-': result = num1 - num2;
         break;
         //for division 
      case '/': result = num1 / num2;
         break;
         // for multiPlication
        case '*': result = num1 * num2;
         break;
            default: printf("\n Invalid Operator ");
   }
   printf("The value = %f", result);
 