//11. Write a C program to find the sum of 2 complex numbers

#include <stdio.h>

typedef struct complex {
    float real;
    float imaginary;
} Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex a = input_complex();
    Complex b = input_complex();
    Complex sum = add_complex(a, b);
    output(a, b, sum);
    return 0;
}

Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("(%f + %fi) + (%f + %fi) = %f + %fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
