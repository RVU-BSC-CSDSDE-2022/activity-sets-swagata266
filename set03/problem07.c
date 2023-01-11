//7. Write a program to find the length of a line
#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter x and y coordinate: ");
    scanf("%f%f", &p.x, &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter the coordinates of the first point: ");
    l.p1 = input_point();
    printf("Enter the coordinates of the second point: ");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx*dx + dy*dy);
}

void output(Line l) {
    printf("Length of line = %.2f\n", l.distance);
}

int main() {
    Line l = input_line();
    find_length(&l);
    output(l);
    return 
}
