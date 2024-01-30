#include<stdio.h>
#include<conio.h>
void main()
{
    int sum(int);

    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
}

int sum(int k)
{
    if (k==0)
    return k;
    else
    return(k+sum(k-1));
}