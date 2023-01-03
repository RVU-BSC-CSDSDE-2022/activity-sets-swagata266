//8. Write a program to add n fractions
#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n() {
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator and denominator: ");
    scanf("%d%d", &f.num, &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n]) {
    printf("Enter the fractions:\n");
    for (int i = 0; i < n; i++) {
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return find_gcd(b, a%b);
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;
    sum.den = f1.den * f2.den;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
    Fraction sum = f[0];
    for (int i = 1; i < n; i++) {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum) {
    printf("The sum of the fractions is: ");
    for (int i = 0; i < n; i++) {
        printf("%d/%d + ", f[i].num, f[i].den);
    }
    printf("= %d/%d\n", sum.num, sum.den);
}

int main() {
    int n;
    Fraction f[100], sum;
    n = input_n();
    input_n_fractions(n, f);
    sum = add_n_fractions(n, f);
    output(n, f, sum);
    return 0;
}
