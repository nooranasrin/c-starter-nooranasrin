#include<stdio.h>

unsigned long int find_factorial(int);
void print_fibonacci(int);
void print_odd(int, int);
void print_even(int, int);
void print_multiplication_table(int, int);
long int add_numbers_till_N(int, int);
long int multiply_numbers_till_N(int, int);

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

int main(void) {
  int number, m, n;
  printf("Enter a number\n");
  scanf("%d", &number);

  printf("\nThe factorial of %d : %lu\n", number, find_factorial(number));

  printf("\nThe fibonacci series till %d are :\n", number);
  print_fibonacci(number);

  printf("\nThe odd numbers from 1 to %d are :\n", number);
  print_odd(1, number);

  printf("\nThe even numbers from 1 to %d are :\n", number);
  print_even(1, number);

  printf("\nThe sum of numbers from 1 to %d : %ld\n", number, add_numbers_till_N(1, number));
  
  printf("\nThe product of numbers from 1 to %d : %ld\n", number, multiply_numbers_till_N(1, number));

  printf("\nEnter the number for multiplication table and the limit\n");
  scanf("%d%d", &m, &n);
  printf("The multiplication table of %d till %d :\n", m, n);
  print_multiplication_table(m, n);

  return 0;
}