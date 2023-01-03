//3. Write a program to find the `nCr` of given n and r
#include <stdio.h>

void input_n_and_r(int *n, int *r) {
    printf("Enter n and r: ");
    scanf("%d%d", n, r);
}

int nCr(int n, int r) {
    int result = 1;
    for (int i = n; i > n - r; i--) {
        result *= i;
    }
    for (int i = 1; i <= r; i++) {
        result /= i;
    }
    return result;
}

void output(int n, int r, int result) {
    printf("%dC%d = %d\n", n, r, result);
}

int main() {
    int n, r, result;
    input_n_and_r(&n, &r);
    result = nCr(n, r);
    output(n, r, result);
    return 0;
}
