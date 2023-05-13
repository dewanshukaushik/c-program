#include <stdio.h>

int i,j,k;
int main()
{
    void input(int a[][3],int b[][3],int r,int c1);
void add(int a[][3],int b[][3],int c[][3],int r,int c1);
void mult(int  a[3][3],int b[3][3],int sum[3][3],int r,int c1);
 void show(int c[i][j],int r,int c1);
    int a[3][3],b[3][3],c[3][3],r,c1,sum[3][3];
    input(a,b,3,3);
    add(a,b,c,3,3);
    mult(a,b,sum,3,3);
    show(c,3,3);
    show(sum,3,3);
    return 0;
}
void input(int a[3][3],int b[3][3],int r,int c1)
{
    printf("Enter 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
    {
        scanf("%d",&a[i][j]);
    }
        
    }
    printf("Enter 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
    {
        scanf("%d",&b[i][j]);
    }
        
    }
    
}
void add(int a[3][3],int b[3][3],int c[3][3],int r,int c1)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        
    }   
    }
   
        
    }
    void mult(int  a[3][3],int b[3][3],int sum[3][3],int r,int c1)
    {
          for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
    {
        sum[i][j]=0;
     for(k=0;k<c1;k++)
    {   
        sum[i][j]=sum[i][j]+a[i][k]*b[k][j];
    }
    }
    }
    }
    
    
    
    
    void show(int c[3][3],int r,int c1 )
    {
         printf("\nMatrix operation\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
    {
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
