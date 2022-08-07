#include <stdio.h>
void main() {

  int a1, b2, sub;

  printf("Enter two number ");
  //Storing user input into variable num1 & num2
  scanf("%d %d", &a1, &b2);

  // subtracting two input numbers
  sub = a1 - b2;

  printf("sub of %d and %d is: %d", a1, b2, sub);
  return 0;
}