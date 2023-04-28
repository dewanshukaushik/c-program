#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct nodetype
{
    int info;
    struct nodetype *next;
} node;
void push(node**);
int pop(node**);
void main()
{
    int ch,item;
    node *top = NULL;
    
    while (1)
    {
        printf("\n1. Push  ");
        printf("\n2. Pop  ");
        printf("\n3. Exit  \n");
        scanf("%d", &ch);
        
        switch (ch)
        {
        case 1:
        {
            push(&top);
            break;
        }
        case 2:
        {
            item = pop(&top);
            printf("%d is deleted",item);
            break;
        }
        case 3:
            exit(0);
        }
    }
}
void push(node **top)
{
    int item;
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("Enter item: ");
    scanf("%d",&item);
    if (top == NULL)
    {
        (*top)=ptr;
        ptr->info=item;
        ptr->next = NULL;
    }
    else
    {
        ptr->next = (*top);
        ptr->info=item;
        (*top)=ptr;
    }
}

int pop(node **top)
{
    int item;
    node *loc;
    loc = (*top);

    if (top == NULL)
    {
        printf("underflow");
    }
    else
    {
        (item) = loc->info;
        (*top)=loc->next;
        free(loc);
        return (item);
    }
}
