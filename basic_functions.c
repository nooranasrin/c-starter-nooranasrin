#include<stdio.h>

int isEven(int);
int isOdd(int);
int getSquare(int);
int getCube(int);
int findSimpleInterest(int, int, int);

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

int findSimpleInterest(int p, int n, int r) {
  return (p * n * r) / 100;
}

int main(void) {
  int num1, p, n, r;
  printf("Enter a number\n");
  scanf("%d", &num1);

  printf("%d is %s\n", num1, isEven(num1) ? "even" : "odd");
  printf("%d is %s\n", num1, isOdd(num1) ? "odd" : "even");
  printf("The square of %d is %d\n", num1, getSquare(num1));
  printf("The cube of %d is %d\n", num1, getCube(num1));

  printf("Enter principle amount, years, rate of interest to find SI\n");
  scanf("%d%d%d", &p, &n, &r);
  printf("The simple interest is %d\n", findSimpleInterest(p, n, r));

  return 0;
}