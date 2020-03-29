#include<stdio.h>
#include<math.h>

int is_even(int);
int is_odd(int);
unsigned int get_square(int);
int get_cube(int);
int is_factor(int, int, int);
int get_HCF(int, int);
float get_LCM(float, int);
float find_simple_interest(int, int, float);
float find_compound_interest(int, int, float);
float convert_fahrenheit_to_celsius(float);
float convert_celsius_to_fahrenheit(float);
int find_greatest(int, int);
int find_greatest_of_three(int, int, int);
int find_average(int, int, int);

int is_even(int number) {
  return number % 2 == 0;
}

int is_odd(int number) {
  return !is_even(number);
}

unsigned int get_square(int number) {
  return number * number;
}

int get_cube(int number) {
  return get_square(number) * number;
}

int is_factor(int num1, int num2, int divisor) {
  return num1 % divisor == 0 && num2 % divisor == 0;
}

int get_HCF(int num1, int num2) {
  int limit, divisor, HCF;
  limit = num1 > num2 ? num2 : num1;

  for (divisor = 1; divisor <= limit; divisor++) {
    if(is_factor(num1, num2, divisor)) {
      HCF = divisor;
    }
  }
  return HCF;
}

float get_LCM(float num1, int num2) {
  return (num1 * num2) / get_HCF(num1, num2);
}

float find_simple_interest(int p, int n, float r) {
  return (p * n * r) / 100;
}

float find_compound_interest(int p, int n, float r) {
  return p * (pow(1 + (r / 100), n)) - p;
}

float convert_fahrenheit_to_celsius(float fahrenheit) {
  return ((fahrenheit - 32) / 180) * 100;
}

float convert_celsius_to_fahrenheit(float celsius) {
  return ((celsius * 180) / 100) + 32;
}

int find_greatest(int num1, int num2) {
  return num1 > num2 ? num1 : num2;
}

int find_greatest_of_three(int num1, int num2, int num3) {
  return find_greatest(find_greatest(num1, num2), num3);
}

int find_average(int num1, int num2, int num3) {
  return (num1 + num2 + num3) / 3;
}

int main(void) {
  int num1, num2, num3, p, n;
  float r;
  float temperature;
  printf("Enter 3 number\n");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("%d is %s\n", num1, is_even(num1) ? "even" : "odd");
  printf("%d is %s\n", num2, is_odd(num2) ? "odd" : "even");
  printf("The square of %d is %u\n", num1, get_square(num1));
  printf("The cube of %d is %d\n", num1, get_cube(num1));
  printf("The largest of %d, %d and %d is %d\n", num1, num2, num3, find_greatest_of_three(num1, num2, num3));
  printf("The average of %d, %d and %d : %d\n", num1, num2, num3, find_average(num1, num2, num3));
  printf("The HCF of %d and %d is %d\n", num1, num2, get_HCF(num1, num2));
  printf("The LCM of %d and %d is %f\n", num1, num2, get_LCM(num1, num2));

  printf("\nEnter temperature\n");
  scanf("%f", &temperature);
  printf("The corresponding centigrade of %ff is %f\n", temperature, convert_fahrenheit_to_celsius(temperature));
  printf("The corresponding fahrenheit of %fc is %f\n", temperature, convert_celsius_to_fahrenheit(temperature));

  printf("\nEnter principle amount, years, rate of interest to find Interest\n");
  scanf("%d%d%f", &p, &n, &r);
  printf("The simple interest is %f\n", find_simple_interest(p, n, r));
  printf("The compound interest is %f\n", find_compound_interest(p, n, r));

  return 0;
}