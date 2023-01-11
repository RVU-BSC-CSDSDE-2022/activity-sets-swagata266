//5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int input_array_size() {
    int n;
    printf("Enter the maximum value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, bool a[n]) {
    memset(a, true, sizeof(bool) * n);
    a[0] = false;
    a[1] = false;
}

void eratosthenes_sieve(int n, bool a[n]) {
    for (int i = 2; i*i <= n; i++) {
        if (a[i]) {
            for (int j = i*i; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
}

void output(int n, bool a[n]) {
    printf("The prime numbers between 2 and %d are:", n);
    for (int i = 2; i <= n; i++) {
        if (a[i]) {
            printf(" %d", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    bool a[n];
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);
    return 0;
}
