#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void enqueue(int q[], int front, int rear, int item);
void dequeue(int q[], int front, int rear, int item);
void main()
{
    int ch, item;
    while (1)
    {
        printf("\n1.insertion ");
        printf("\n2. Deletion");
        printf("\n3. Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            void enqueue(q[], front, rear, item);
            break;
        case 2:

            void dequeue(int q[], int front, int rear, int item);
            break;
        case 3:
            exit(0);
        }
    }
}
void enqueue(int q[], int front, int rear, int item);
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
        printf("overflow");
    else
    {
        if (front == -1)
            front = rear = 0;
        else if (rear == n - 1)
            rear = 0;
        else
            rear++;
    }
    q[rear] = item;
}
oid dequeue(int q[], int front, int rear, int item);
{
    if (front == -1)
        printf("underflow");
    else
    {
        if (front == rear)
            front = rear = -1;
        else if (front == n - 1)
            front = 0;
        else
            front++;
    }
    item = q[front];
}