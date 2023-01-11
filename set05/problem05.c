//5.  Write a program to find borga(x) given x.
#include <stdio.h>

int input() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

float borga_X(int x) {
    float result = 1;
    int i = 1;
    float term = 1;
    while (term > 0.000001) {
        term = (float)pow(x, i) / (i * 2 + 1);
        result += term;
        i++;
    }
    return result;
}

void output(int x, float result) {
    printf("The value of borga(%d) is %0.6f\n", x, result);
}

int main() {
    int x = input();
    float result = borga_X(x);
    output(x, result);
}
