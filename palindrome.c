#include <stdio.h>
#include <conio.h>
void main(){
    int a,rem,sum=0,temp;
    printf("enter the number ");
    scanf("%d",&a);
    temp = a;
    while(temp>0){
        rem = temp%10;
        sum = (sum*10)+rem;
        temp=temp/10;
    }
//    if(a==sum)    
// printf("palindrome number ");    
// else    
// printf("not palindrome");   
  
// }
printf("%d",sum);
}