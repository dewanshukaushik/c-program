#include<stdio.h>
#include<conio.h>

// int fact(int k){
//     if(k<=0)
    
//         return 1;
    
// else
// return (k*fact(k-1));
// }

// void main()
// {
    

//     int n,result;
//     printf("enter the number");
//     scanf("%d",&n);
//     result=fact(n);
//     printf("%d",result);
// }

void main()
{
  

    int n,result=1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    result=result*i;
    printf("%d",result);
}