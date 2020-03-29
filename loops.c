#include<stdio.h>

unsigned long int find_factorial(int);
void print_fibonacci(int);
void print_odd(int, int);
void print_even(int, int);
void print_multiplication_table(int, int);
long int add_numbers_till_N(int, int);
long int multiply_numbers_till_N(int, int);
long int add_even_till_N(int, int);
void print_odd_backward(int, int);

unsigned long int find_factorial(int term) {
  long factorial = 1, number;
  for (int number = 1; number <= term; number++) {
    factorial = factorial * number;
  }
  return factorial;
}

void print_fibonacci(int limit) {
  int previous = 0, current = 0, next = 1;
  while (current <= limit) {
    printf("%d\n",current);    
    previous = current;
    current = next;
    next = previous + current;
  }
}

void print_odd(int start, int end) {
  int skip = 2, current;
  int excess = start % skip;
  int first_odd = start - excess + 1;

  for(current = first_odd; current <= end; current += skip){
    printf("%d\n", current);
  }
}

void print_even(int start, int end) {
  int skip = 2, current;
  int excess = start % skip;
  int first_even = start + excess;

  for(current = first_even; current <= end; current += skip){
    printf("%d\n", current);
  }
}

void print_multiplication_table(int m, int n) {
  int mul_number, product = 1;
  for (mul_number = 1; mul_number <= n; mul_number++) {
    product = m * mul_number;
    printf("%d * %d = %d\n", m, mul_number, product);
  }
}

long int add_numbers_till_N(int start, int end) {
  long int sum = 0, current;
  for (current = start; current <= end; current++) {
    sum += current;
  }
  return sum;
}

long int multiply_numbers_till_N(int start, int end) {
  long int product = 1, current;
  for (current = start; current <= end; current++) {
    product *= current;
  }
  return product;
}

long int add_even_till_N(int start, int end) {
  int skip = 2, current, sum = 0;
  int excess = start % skip;
  int first_even = start + excess;

  for(current = first_even; current <= end; current += skip){
    sum += current;
  }
  return sum;
}

void print_odd_backward(int start, int end) {
  int skip = 2, current;
  int excess = end % skip;
  int first_odd = end - excess - 1;

  for(current = first_odd; current >= start; current -= skip){
    printf("%d\n", current);
  }
}

int main(void) {
  int num1, num2, m, n;
  printf("Enter two number\n");
  scanf("%d%d", &num1, &num2);

  printf("\nThe factorial of %d : %lu\n", num1, find_factorial(num1));

  printf("\nThe fibonacci series till %d are :\n", num1);
  print_fibonacci(num1);

  printf("\nThe odd numbers from 1 to %d are :\n", num1);
  print_odd(1, num1);

  printf("\nThe even numbers from 1 to %d are :\n", num1);
  print_even(1, num1);

  printf("\nThe sum of numbers from 1 to %d : %ld\n", num1, add_numbers_till_N(1, num1));

  printf("\nThe product of numbers from 1 to %d : %ld\n", num1, multiply_numbers_till_N(1, num1));

  printf("\nThe sum of event numbers from %d to %d is : %ld\n", num1, num2, add_even_till_N(num1, num2));

  printf("\nThe odd numbers from %d to 1 are :\n", num1);
  print_odd_backward(1, num1);

  printf("\nThe odd numbers from %d to %d are :\n", num1, num2);
  print_odd(num1, num2);

  printf("\nEnter the number for multiplication table and the limit\n");
  scanf("%d%d", &m, &n);
  printf("The multiplication table of %d till %d :\n", m, n);
  print_multiplication_table(m, n);

  return 0;
}