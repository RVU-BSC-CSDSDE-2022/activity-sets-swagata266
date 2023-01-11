//3. Write a program to check if the given number is prime
#include <stdio.h>
#include <stdbool.h>

int input_number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void output(int n, bool result) {
    if (result) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

int main() {
    int n = input_number();
    bool result = is_prime(n);
    output(n, result);
    
}
