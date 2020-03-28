#include<stdio.h>

int is_even(int);
int is_odd(int);
int get_square(int);
int get_cube(int);
int find_simpleInterest(int, int, int);

int is_even(int number) {
  return number % 2 == 0;
}

int is_odd(int number) {
  return !is_even(number);
}

int get_square(int number) {
  return number * number;
}

int get_cube(int number) {
  return get_square(number) * number;
}

int find_simpleInterest(int p, int n, int r) {
  return (p * n * r) / 100;
}


int main(void) {
  int num1, p, n, r;
  printf("Enter a number\n");
  scanf("%d", &num1);

  printf("%d is %s\n", num1, is_even(num1) ? "even" : "odd");
  printf("%d is %s\n", num1, is_odd(num1) ? "odd" : "even");
  printf("The square of %d is %d\n", num1, get_square(num1));
  printf("The cube of %d is %d\n", num1, get_cube(num1));

  printf("Enter principle amount, years, rate of interest to find Interest\n");
  scanf("%d%d%d", &p, &n, &r);
  printf("The simple interest is %d\n", find_simpleInterest(p, n, r));

  return 0;
}