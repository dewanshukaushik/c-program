#include <stdio.h>
int main() {

  int a1, b2, multi;

  printf("Enter two number ");
  //Storing user input into variable num1 & num2
  scanf("%d %d", &a1, &b2);

  // multiply two input numbers
  multi = a1 * b2;

  printf("sub of %d and %d is: %d", a1, b2, multi);
  return 0;
}