4. Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)
#include <stdio.h>

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial:\n");
    for (int i = 0; i <= n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[n];
    for (int i = n-1; i >= 0; i--) {
        result = result*x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("The value of the polynomial ");
    for (int i = n; i >= 0; i--) {
        printf("%.2fx^%d ", a[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }
    printf("at x = %.2f is %.2f\n", x, result);
}

int main() {
    int n;
    float a[100], x, result;
    n = input_degree();
    input_coefficients(n, a);
    x = input_x();
    result = evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}
