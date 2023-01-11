//4.  Write a program to find out the mood of a Camel.
#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius, height and length of the camel: ");
    scanf("%f%f%f", radius, height, length);
}

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 1; 
    } else if (height < length && height < radius) {
        return 2; 
    } else if (length < height && length < radius) {
        return 3;
    }
    return 0;
}

void output(float radius, float height, float length, int mood) {
    printf("The camel with stomach radius %0.2f, height %0.2f and length %0.2f is ", radius, height, length);
    if (mood == 1) {
        printf("sick\n");
    } else if (mood == 2) {
        printf("happy\n");
    } else if (mood == 3) {
        printf("tense\n");
    } else {
        printf("in an unknown mood\n");
    }
}

int main() {
    float radius, height, length;
    input_camel_details(&radius, &height, &length);
    int mood = find_mood(radius, height, length);
    output(radius, height, length, mood);
}
