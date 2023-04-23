/*

This program is create to perform various operations over an Array.


*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{ 
    //===============================================FUNCTION DECLEARATION===============================================================
    void transversal(int[], int);
    int linear_search(int[50], int);
    int binary_search(int[], int);
    int unsorted_insertation(int[], int);
    int sorted_insertion(int[], int);
    void bubble_sort(int[], int);
    int delete (int[], int);
    //==================================================================================================================================
    int arr[100], i, size, operation, result;
    // clrscr();
    printf("Enter the size of array: ");
    scanf("%d", &size); // Taking the size of the array through USER
    printf("\nEnter the elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Scanning the elements of array from the user
    }

    while (1)
    {
        printf("\nPlease select the opertaion number:\n1:'transversal'\n2:'Linear Search'\n3: 'Binary Search'\n4:'Bubble Sort'\n5:'Unsorted Insertion'\n6: 'Sorted Insertion'\n7: 'Deletion'\n");
        scanf("%d", &operation); // Scanning operation from user
        switch (operation)
        {
        case 1:
            transversal(arr, size);
            break;
        case 2:
            result = linear_search(arr, size);
            if (result == -1)
            {
                printf("\nSearched item is not found.");
            }
            else
            {
                printf("\nSearched item is found at position %d", result + 1);
            }
            break;
        case 3:
            result = binary_search(arr, size);
            if (result == -1)
            {
                printf("\nSearched item is not found.");
            }
            else
            {
                printf("\nSearched item is found at position %d", result + 1);
            }
            break;
        case 4:
            bubble_sort(arr, size);
            break;
        case 5:
            unsorted_insertation(arr, size);
            break;
        case 6:
            sorted_insertion(arr, size);
            break;
        case 7:
            delete (arr, size);
            break;
        default:
            exit(0);
        }
    }

    // getch();
}

//=================================================TRANSVERSAL FUNCTION DEFINATION=====================================================
void transversal(int a[], int n)
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

//=================================================LINEAR FUNCTION DEFINATION=====================================================
int linear_search(int ar[50], int x)
{
    int n, i;
    printf("\nEnter the search number: ");
    scanf("%d", &n);
    for (i = 0; i < x; i++)
    {
        if (ar[i] == n)
        {
            return i;
        }
    }
    return -1;
}
//=================================================BINARY FUNCTION DEFINATION=====================================================

int binary_search(int arr[], int size)
{
    int begin, end, mid, item;
    printf("\nEnter the search item: ");
    scanf("%d", &item);
    begin = 0;
    end = size - 1;
    mid = (begin + end) / 2;
    while ((begin <= end) && (arr[mid] != item))
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
        }
        mid = (begin + end) / 2;
    }
    if (begin > end)
    {
        return -1;
    }
    else
    {
        return mid;
    }
}
//=================================================Bubble Sort FUNCTION DEFINATION=================================================
void bubble_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) // Loop continus its iteration till size-1
    {
        for (j = 0; j < size - i - 1; j++) // for accessing each element
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
//=================================================UNSORTED INSERTATION FUNCTION DEFINATION=============================================
int unsorted_insertation(int arr[], int size)
{
    int item, position, i;
    printf("\nEnter the item to be inserted: ");
    scanf("%d", &item);
    printf("\nAt what position it has to be inserted: ");
    scanf("%d", &position);
    for (i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = item;
    size = size + 1;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
//=================================================SORTED INSERTATION FUNCTION DEFINATION===========================================

int sorted_insertion(int arr[], int size)
{
    int item, i;
    printf("\nEnter the item which is to be inserted: ");
    scanf("%d", &item);
    arr[size] = item;
    size = size + 1;
    bubble_sort(arr, size);
    return 0;
}

//======================================================Deletion FUNCTION DEFINATION================================================
int delete(int arr[], int size)
{
    int item, i;
    printf("Enter the item which is to be delete: ");
    scanf("%d", &item);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            while (i != size + 1)
            {
                arr[i] = arr[i + 1];
                i++;
            }
        }
    }
    size = size - 1;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}