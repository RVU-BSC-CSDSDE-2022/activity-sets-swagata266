//07. Write a program to find the area of a triangle.
#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle() {
	Triangle t;
	printf("Enter the base of the triangle: ");
	scanf("%f", &t.base);
	printf("Enter the altitude of the triangle: ");
	scanf("%f", &t.altitude);
	return t;
}

void find_area(Triangle *t) {
	t->area = (t->base * t->altitude) / 2;
}


void output(Triangle t) {
	printf("The area of the triangle is: %.2f\n", t.area);
}

int main() {
	Triangle t = input_triangle(); 
	find_area(&t); of the triangle
	output(t); 
	
}

