//12. Write a C program to find the sum of _n_ complex numbers.
#include <stdio.h>

struct complex {
	float real,imaginary;
};
typedef struct complex Complex;

int get_n() {
	int n;
	printf("Enter the number of complex numbers: ");
	scanf("%d", &n);
	return n;
}

Complex input_complex() {
	Complex c;
	printf("Enter the real and imaginary parts: ");
	scanf("%f %f", &c.real, &c.imaginary);
	return c;
}

void input_n_complex(int n, Complex c[n]) {
	for (int i = 0; i < n; i++) {
		printf("Enter the %d-th complex number: ", i+1);
		c[i] = input_complex();
	}
}

Complex add(Complex a, Complex b) {
	Complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}

Complex add_n_complex(int n, Complex c[n]) {
	Complex result = c[0];
	for (int i = 1; i < n; i++) {
		result = add(result, c[i]);
	}
	return result;
}

void output(int n, Complex c[n], Complex result) {
	printf("The sum of the %d complex numbers is: %.2f + %.2fi\n", n, result.real, result.imaginary);
}

int main() {
	int n = get_n();
	Complex c[n];
	input_n_complex(n, c);
	Complex result = add_n_complex(n, c);
	output(n, c, result);
	return 0;
}

