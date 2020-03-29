#include<stdio.h>

int breakdown_into_currency(int, int);

int breakdown_into_currency(int amount, int currency) {
  int noOfCurrency = amount / currency;
  printf("%d x Rs %d\n", noOfCurrency, currency);
  return amount - (noOfCurrency * currency);
}

int main(void) {
  int amount;
  printf("Enter the amount\n");
  scanf("%d", &amount);
  amount = breakdown_into_currency(amount, 2000);
  amount = breakdown_into_currency(amount, 500);
  amount = breakdown_into_currency(amount, 200);
  amount = breakdown_into_currency(amount, 100);
  amount = breakdown_into_currency(amount, 50);
  amount = breakdown_into_currency(amount, 10);
  amount = breakdown_into_currency(amount, 5);
  breakdown_into_currency(amount, 1);
  return 0;
}