2. Write a program to find whether the given 3 points form a triangle
#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float d1 = distance(x1, y1, x2, y2);
    float d2 = distance(x1, y1, x3, y3);
    float d3 = distance(x2, y2, x3, y3);

    if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1) {
        return 0;
    }

    return 1;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the coordinates of the three points:\n");
    scanf("%f%f%f%f%f%f", x1, y1, x2, y2, x3, y3);
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result) {
        printf("The points (%0.1f, %0.1f), (%0.1f, %0.1f), and (%0.1f, %0.1f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%0.1f, %0.1f), (%0.1f, %0.1f), and (%0.1f, %0.1f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}

int main(void)
{
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}
