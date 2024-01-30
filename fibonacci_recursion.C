#include<stdio.h>
#include<conio
int fib(int k){
    if(k<=0)
    
        return 1;
    
else
return (k*fib(k-1));
}

void main()
{


    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    printf("0 1 ")
    result=fib(n);
    printf("%d",result);
}