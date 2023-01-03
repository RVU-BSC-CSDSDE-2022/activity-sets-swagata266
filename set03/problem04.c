//4. Write a program to find nth number in fibonacci sequence.
#include <stdio.h>

int input() {
    int n;
    printf("Enter the index of the number in the Fibonacci sequence: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n == 0 || n == 1) return n;
    return find_fibo(n-1) + find_fibo(n-2);
}

void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is %d.\n", n, fibo);
}

int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
