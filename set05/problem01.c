//1.  Write a program to find the distance between two points.
#include <math.h>
#include <stdio.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input() {
    Point p;
    printf("Enter the x and y coordinates of the point: ");
    scanf("%f%f", &p.x, &p.y);
    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
}

void output(Point a, Point b, float res) {
    printf("The distance between (%0.2f,%0.2f) and (%0.2f,%0.2f) is %0.2f\n", a.x, a.y, b.x, b.y, res);
}

int main() {
    Point a, b;
    float res;
    a = input();
    b = input();
    dist(a, b, &res);
    output(a, b, res);
}
