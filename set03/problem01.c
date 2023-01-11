//1. Write a program to find the distance between 2 points
#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2) {
	printf("Enter the coordinates of the first point (x1 y1): ");
	scanf("%f%f", x1, y1);
	printf("Enter the coordinates of the second point (x2 y2): ");
	scanf("%f%f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
	float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return distance;
}

void output(float x1, float y1, float x2, float y2, float distance) {
	printf("The coordinates of the first point are: (%.2f, %.2f)\n", x1, y1);
	printf("The coordinates of the second point are: (%.2f, %.2f)\n", x2, y2);
	printf("The distance between the two points is: %.2f\n", distance);
}

int main() {
	float x1, y1, x2, y2, distance;
	input(&x1, &y1, &x2, &y2); 
	distance = find_distance(x1, y1, x2, y2); 
  output(x1, y1, x2, y2, distance); 
	return 0;
}

