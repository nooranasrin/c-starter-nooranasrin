#include<stdio.h>

int is_even(int);
int is_odd(int);
int get_square(int);
int get_cube(int);
int find_simpleInterest(int, int, int);
int find_greatest(int, int);
int find_greatest_of_three(int, int, int);
int find_average(int, int, int);

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

int find_greatest(int firstNum, int secondNum) {
  return firstNum > secondNum ? firstNum : secondNum;
}

int find_greatest_of_three(int num1, int num2, int num3) {
  return find_greatest(find_greatest(num1, num2), num3);
}

int find_average(int num1, int num2, int num3) {
  return (num1 + num2 + num3) / 3;
}

int main(void) {
  int num1, num2, num3, p, n, r;
  printf("Enter 3 number\n");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("%d is %s\n", num1, is_even(num1) ? "even" : "odd");
  printf("%d is %s\n", num1, is_odd(num1) ? "odd" : "even");
  printf("The square of %d is %d\n", num1, get_square(num1));
  printf("The cube of %d is %d\n", num1, get_cube(num1));
  printf("The largest of %d, %d and %d is %d\n", num1, num2, num3, find_greatest_of_three(num1, num2, num3));
  printf("The average of %d, %d and %d : %d\n", num1, num2, num3, find_average(num1, num2, num3));

  printf("Enter principle amount, years, rate of interest to find Interest\n");
  scanf("%d%d%d", &p, &n, &r);
  printf("The simple interest is %d\n", find_simpleInterest(p, n, r));

  return 0;
}