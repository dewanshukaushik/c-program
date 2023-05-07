#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void bubble_sort(int[], int);
void selection(int[], int);
void insertion_sort(int[], int);

void inputarray(int[], int);
void outputarray(int[], int);
int minimum(int[], int, int);

void main()
{
    int a[20], n, ch;
    printf("enter the size of array :\n");
    scanf("%d", &n);
    inputarray(a, n);
    while (1)
    {
        printf("\n1.bubble sort ");
        printf("\n2. selection ");
        printf("\n3. insertion ");
        printf("\n4. Exit ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            bubble_sort(a, n);
            break;
        }
        case 2:
        {
            selection(a, n);
            break;
        }
        case 3:
        {
            insertion_sort(a, n);
            break;
        }
        case 4:
            exit(0);
        }
    }
}
void inputarray(int a[], int n)
{
    int i;
    printf("Enter the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    outputarray(a, n);
}
int minimum(int a[], int beg, int n)
{
    int min, i, index;
    min = a[beg];
    index = beg;
    for (i = beg + 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}
void selection(int a[], int n)
{
    int mini, i, temp;
    for (i = 0; i < n - 1; i++)
    {
        mini = minimum(a, i, n);
        if (i != mini)
        {
            temp = a[i];
            a[i] = a[mini];
            a[mini] = temp;
        }
    }
    outputarray(a, n);
}
void insertion_sort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    outputarray(a, n);
}

void outputarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}