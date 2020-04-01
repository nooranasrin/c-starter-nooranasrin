#include<stdio.h>

void generate_fibonacci(int*, int);

void generate_fibonacci(int *fibonacci_numbers, int limit) {
  int previous = 0, current = 0, next = 1;
  for (int index = 0; index <= limit; index++) {
    fibonacci_numbers[index] = current;
    previous = current;
    current = next;
    next = previous + current;
  }
}


int main(void) {
  int limit;
  printf("Enter the limit of fibonacci numbers\n");
  scanf("%d", &limit);

  int fibonacci_numbers[limit];
  generate_fibonacci(fibonacci_numbers, limit);

  for (int index = 0; index < limit; index++) {
    printf("%d\n", fibonacci_numbers[index]);
  }

  return 0;
}