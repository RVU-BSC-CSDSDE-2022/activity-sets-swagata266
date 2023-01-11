//3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

struct camel {
	float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input() {
    Camel c;
    printf("Enter the stomach radius, height and length of the camel: ");
    scanf("%f%f%f", &c.radius, &c.height, &c.length);
    return c;
}

float find_weight(Camel c) {
    return PI * pow(c.radius, 3) * sqrt(c.height * c.length);
}

void output(Camel c) {
    printf("The weight of a camel with stomach radius %0.2f, height %0.2f and length %0.2f is %0.2f\n", c.radius, c.height, c.length, c.weight);
}

int main() {
    Camel c;
    c = input();
    //find_weight(&c);
    c.weight = find_weight(c);
    output(c);
    return 0;
}
