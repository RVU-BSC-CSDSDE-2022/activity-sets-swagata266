//2. Write a program to find the smallest of three fractions
#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

void input(Fraction *f1, Fraction *f2, Fraction *f3) {
    printf("Enter the numerator and denominator of the first fraction: ");
    scanf("%d%d", &f1->num, &f1->den);
    printf("Enter the numerator and denominator of the second fraction: ");
    scanf("%d%d", &f2->num, &f2->den);
    printf("Enter the numerator and denominator of the third fraction: ");
    scanf("%d%d", &f3->num, &f3->den);
}

Fraction find_smallest(Fraction f1, Fraction f2, Fraction f3) {
    Fraction min;
    float val1 = (float)f1.num / f1.den;
    float val2 = (float)f2.num / f2.den;
    float val3 = (float)f3.num / f3.den;
    min = (val1 < val2) ? f1 : f2;
    min = (val3 < val1) ? f3 : min;
    return min;
}

void output(Fraction f) {
    printf("The smallest fraction is %d/%d\n", f.num, f.den);
}

int main() {
    Fraction f1, f2, f3, min;
    input(&f1, &f2, &f3);
    min = find_smallest(f1, f2, f3);
    output(min);
    
}
