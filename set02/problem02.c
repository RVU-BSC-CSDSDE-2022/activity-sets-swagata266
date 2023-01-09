//02.  Write a program to find if a triangle is scalene.
#include <stdio.h>

int input_side() {
  int side;
  printf("Enter the length of a side of the triangle: ");
  scanf("%d", &side);
  return side;
}

int check_scalene(int a, int b, int c) {
  if (a != b && a != c && b != c) {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isscalene) {
  printf("The lengths of the sides of the triangle are %d, %d, and %d\n", a, b, c);
  if (isscalene) {
    printf("The triangle is scalene.\n");
  } else {
    printf("The triangle is not scalene.\n");
  }
}

int main() {
  int a = input_side();
  int b = input_side();
  int c = input_side();
  int isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}
