#include<stdio.h>

void breakdown_into_currency(int, int*, int*, int);

void breakdown_into_currency(int amount, int *currencies, int *counts, int length) {
  for (int index = 0; index < length; index ++) {
    int noOfCurrency = amount / currencies[index];
    counts[index] = noOfCurrency; 
    amount -= (noOfCurrency * currencies[index]);
  }
}

int main(void) {
  int amount, counts[8];
  int currencies[8] = {2000, 500, 200, 100, 50, 10, 5, 1};

  printf("Enter the amount\n");
  scanf("%d", &amount);
  breakdown_into_currency(amount, currencies, counts, 8);

  for (int index = 0; index < 8; index++) {
    printf("%d x Rs %d\n", counts[index], currencies[index]);
  }

  return 0;
}