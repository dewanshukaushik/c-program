#include<stdio.h>
#include<conio.h>
#define size 8
void main()
{
// clrscr();
void selection(int [],int);
void inputarray(int [],int);
void outputarray(int [],int);
int minimum(int [],int,int);
int a[size];
inputarray(a,size);
selection(a,size);
outputarray(a,size);
getch();
}
void inputarray(int a[size],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter the array");
scanf("%d",&a[i]);
}
}
int minimum(int a[size],int beg,int n)
{
int min,i,index;
min=a[beg];
index=beg;
for(i=beg+1;i<n;i++)
{
if(min>a[i])
{
min = a[i];
index = i;
}
}
return index;
}
void selection(int a[size],int n)
{
int mini,i,temp;
for(i=0;i<n-1;i++)
{
mini = minimum(a,i,n);
if(i!=mini)
{
temp=a[i];
a[i]=a[mini];
a[mini]=temp;
}
}
}
void outputarray(int a[size],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}