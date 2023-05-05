#include <stdio.h>
#include <conio.h>
void insertion_sort(int[], int);
void inputarray(int[], int);
void outputarray(int[], int);
void main()
{
    int a[20], n;
    printf("enter the size of array :\n");
    scanf("%d", &n);
    inputarray(a, n);
    insertion_sort(a, n);

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
void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        
        {
            if (a[j] > a[j + 1])
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