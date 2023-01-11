//08. Write a program to find the triangle with smallest area in n given triangles.
#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n() {
	int n;
	printf("Enter the number of triangles: ");
	scanf("%d", &n);
	return n;
}

Triangle input_triangle() {
	Triangle t;
	printf("Enter the base of the triangle: ");
	scanf("%f", &t.base);
	printf("Enter the altitude of the triangle: ");
	scanf("%f", &t.altitude);
	return t;
}

void input_n_triangles(int n, Triangle t[n]) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Enter the details of triangle %d\n", i + 1);
		t[i] = input_triangle();
	}
}

void find_area(Triangle *t) {
	t->area = (t->base * t->altitude) / 2;
}

void find_n_areas(int n, Triangle t[n]) {
	int i;
	for (i = 0; i < n; i++) {
		find_area(&t[i]);
	}
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
	int i;
	Triangle smallest = t[0];
	for (i = 1; i < n; i++) {
		if (t[i].area < smallest.area) {
			smallest = t[i];
		}
	}
	return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
	printf("The details of the smallest triangle among the %d triangles are:\n", n);
	printf("Base: %.2f, Altitude: %.2f, Area: %.2f\n", smallest.base, smallest.altitude, smallest.area);
}

int main() {
	int n = input_n(); 
    Triangle t[n];
    input_n_triangles(n, t);
    find_n_areas(n, t);
    Triangle smallest = find_smallest_triangle(n, t);
    output(n, t, smallest);

  }