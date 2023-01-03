//01.  Write a program to find the area of a triangle.
#include <stdio.h>

void input(float *base, float *height) {
  printf("Enter the base of the triangle: ");
  scanf("%f", base);
  printf("Enter the height of the triangle: ");
  scanf("%f", height);
}

void find_area(float base, float height, float *area) {
  *area = 0.5 * base * height;
}

void output(float base, float height, float area) {
  printf("The base of the triangle is %.2f\n", base);
  printf("The height of the triangle is %.2f\n", height);
  printf("The area of the triangle is %.2f\n", area);
}

int main() {
  float base, height, area;
  input(&base, &height);
  find_area(base, height, &area);
  output(base, height, area);
  return 0;
}
