//05.  Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>

int input() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}

int find_gcd(int a, int b) {
  while (a != 0 && b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a + b;
}

void output(int a, int b, int gcd) {
  printf("The GCD of %d and %d is %d\n", a, b, gcd);
}

int main() {
  int a = input();
  int b = input();
  int gcd = find_gcd(a, b);
  output(a, b, gcd);
  return 0;
}
