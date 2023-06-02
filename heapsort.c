#include <stdio.h>
#include<conio.h>
   void heapsort(int a[],int n);
    void heapify(int a[],int n);
    void reheapifydownward(int a[],int start,int finish);
void main()
{

    int a[100],n,i;
    printf("enter number of element ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("After heap sort");
    for(i=1;i<=n;i++)
    {
       printf("%d ",a[i]);
    }
}
void heapsort(int a[],int n)
{
    int i,temp;
  heapify(a,n)  ;
   for(i=n;i>=1;i--)
   {
       temp=a[1];
       a[1]=a[i];
       a[i]=temp;
       reheapifydownward(a,1,i-1);
   }
}
void heapify(int a[],int n)
{
   int index=n/2,i;
   for(i=index;i>=1;i--)
   {
      reheapifydownward(a,i,n);
   }
}
void reheapifydownward(int a[],int start,int finish)
{
    int lchild,rchild,maximum,index,temp;
    lchild=2*start;
    rchild=lchild+1;
    if(lchild<=finish)
    {
        maximum=a[lchild];
        index=lchild;
        if(rchild<=finish)
        {
            if(a[rchild]>maximum)
            {
                maximum=a[rchild];
                index=rchild;
            }
        }
        if(a[start]<a[index])
        {
            temp=a[start];
            a[start]=a[index];
            a[index]=temp;
            reheapifydownward(a,index,finish);
        }
    }
}

