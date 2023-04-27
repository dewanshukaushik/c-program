#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int c,p;
    node * poly=NULL;
    node * poly2=NULL;
    node * poly3=NULL;
    while (1)
    {
        scanf("%d",&c,&p);
        createpoly(poly1,c,p);
    }
    createpoly(poly2,c,p);
    multipoly(poly1,poly2,&poly3);
    display(poly3);


}
void createpoly(ode **poly,int c ,int p)
{
    node *ptr;
    ptr=(node * )
}