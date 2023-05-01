#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num, power, res;
    int power1(int, int);
    //clrscr();
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter Power: ");
    scanf("%d", &power);
    res = power1(num, power);
    printf("%d^%d=%d", num, power, res);
    getch();
}

int power1(int num, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return ((num) * (power1(num, power - 1)));
    }
}
