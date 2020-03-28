#include<stdio.h>

int isEven(int);
int isOdd(int);
int getSquare(int);
int getCube(int);

int isEven(int number) {
  return number % 2 == 0;
}

int isOdd(int number) {
  return !isEven(number);
}

int getSquare(int number) {
  return number * number;
}

int getCube(int number) {
  return getSquare(number) * number;
}

int main(void) {
  int number;
  printf("Enter a number\n");
  scanf("%d", &number);
  printf("The given number is even : %d\n", isEven(number));
  printf("The given number is odd : %d\n", isOdd(number));
  printf("The square of %d is %d\n", number, getSquare(number));
  printf("The cube of %d is %d\n", number, getCube(number));
  return 0;
}