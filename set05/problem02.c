//2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius, height and length of the camel: ");
    scanf("%f%f%f", radius, height, length);
}

float find_weight(float radius, float height, float length) {
    return PI * pow(radius, 3) * sqrt(height * length);
}

void output(float radius, float height, float length, float weight) {
    printf("The weight of a camel with stomach radius %0.2f, height %0.2f and length %0.2f is %0.2f\n", radius, height, length, weight);
}

int main() {
    float radius, height, length, weight;
    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}
