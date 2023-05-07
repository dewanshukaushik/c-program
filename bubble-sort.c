#include <stdio.h>
#include <conio.h>
void bubble_sort(int[], int);
void inputarray(int[], int);
void outputarray(int[], int);
void main()
{
    int a[20], n;
    printf("enter the size of array :\n");
    scanf("%d", &n);
    inputarray(a, n);
    bubble_sort(a, n);
    outputarray(a, n);
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
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void outputarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}