#include<stdio.h>

int isEven(int);

int isEven(int number) {
  return number % 2 == 0;
}

int main(void) {
  int number;
  printf("Enter a number\n");
  scanf("%d", &number);
  printf("The given number is even : %d\n", isEven(number));
  return 0;
}