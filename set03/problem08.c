//8. Write a program to find the permeter of a polygon
#include <stdio.h>
#include <math.h>

typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Line input_line(int n) {
    Line l;
    printf("Enter the coordinates of point %d: ", n);
    scanf("%f%f", &l.p.start_end_x, &l.p.start_end_y);
    return l;
}

void input_n_lines(int n, Line *l) {
    for (int i = 0; i < n; i++) {
        l[i] = input_line(i+1);
    }
}

int input_polygon(Polygon *p) {
    p->sides = input_n();
    input_n_lines(p->sides, p->l);
    return p->sides;
}

float find_distance(Point a, Point b) {
    float dx = b.start_end_x - a.start_end_x;
    float dy = b.start_end_y - a.start_end_y;
    return sqrt(dx*dx + dy*dy);
}

void find_n_distance(int n, Line *l) {
    for (int i = 0; i < n; i++) {
        l[i].distance = find_distance(l[i].p, l[(i+1)%n].p);
    }
}

void find_perimeter(Polygon* p) {
    find_n_distance(p->sides, p->l);
    for (int i = 0; i < p->sides; i++) {
        p->perimeter += p->l[i].distance;
    }
}

void output(Polygon p) {
    printf("Perimeter of the polygon: %.2f\n", p.perimeter);
}

int main() {
    Polygon p;
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}
