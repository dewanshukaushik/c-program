 #include<stdio.h>
 #include<math.h>
int fun(int n,int x)
{
    if(x==0&&x==1)
    return 1;
    else 
    return(n*fun(n,x-1));

}
void main()
{int fun(int,int);
int n,f,x;
printf("enter the number ");
scanf("%d",&n);
printf("enter the power ");
scanf("%d",&x);

    f=fun(n,x);
    printf("%d",f);
}