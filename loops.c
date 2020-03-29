#include<stdio.h>

int find_factorial(int);

int find_factorial(int term) {
  int factorial = 1, number;
  for (int number = 1; number <= term; number++) {
    factorial = factorial * number;
  }
  return factorial;
}

int main(void) {
  int number;
  printf("Enter a number\n");
  scanf("%d", &number);

  printf("The factorial of %d : %d\n", number, find_factorial(number));
  return 0;
}