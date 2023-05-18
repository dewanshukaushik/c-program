#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#define Max 100
void push(int stack[], int *top, int item);
int pop(int stack[], int *top);
void push2(int stack2[], int *top2, int item2);
int pop2(int stack2[], int *top2);
void main()
{
    int stack[Max],int stack2[Max], top = -1,top2 =100 ,ch, item,item2;
    while (1)
    {
        printf("\n1. Push ");
        printf("\n2. Pop ");
        printf("\n3. Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (top == Max - 1)
                printf("\nOverflow");
            else
            {
                printf("\nEnter element ");
                scanf("%d", &item);
                push(stack, &top, item);
            }
            break;
        case 2:
            if (top == -1)
                printf("\nUnderflow");
            else
            {
                item = pop(stack, &top);
                printf("%d", item);
            }
            break;
            case 3:
            if (top2 == 0  )
                printf("\nOverflow");
            else
            {
                printf("\nEnter element ");
                scanf("%d", &item2);
                push(stack2, &top2, item2);
            }
            break;
        case 4:
            if (top2 == Max)
                printf("\nUnderflow");
            else
            {
                item2 = pop2(stack2, &top2);
                printf("%d", item2);
            }
            break;
        case 5: exit(0);
        }
    }
}
void push(int stack[], int *top, int item)
{
    (*top)++;
    stack[*top] = item;
}

void push2(int stack2[], int *top2, int item2)
{ 
    {
    (*top2)--;
    stack2[*top2] = item2;
}
}
int pop(int stack2[], int *top)
{
    int item;
    item = stack[*top];
    (*top)--;
    return item;}

    int po2(int stack2[], int *top2)
{
    int item2;
    item2 = stack2[*top2];
    (*top2)++;
    return item2;}