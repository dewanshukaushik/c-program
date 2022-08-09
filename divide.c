#include <stdio.h>
int main() {

  int a1, b2, divide;

  printf("Enter two number ");

    //Storing user input into variable num1 & num2
  scanf("%d %d", &a1, &b2);

  // Divide two input numbers
  divide = a1 / b2;

  printf("division of %d and %d is: %d", a1, b2, divide);
  return 0;
}