//6.  Write a program to find the average of all the odd elements in an array
#include <stdio.h>

int input_n() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        return 0;
    }
    return (float)sum / count;
}

void output(float avg) {
    if (avg == 0) {
        printf("No odd elements found in the array\n");
    } else {
        printf("The average of all the odd elements in the array is %0.2f\n", avg);
    }
}

int main() {
    int n = input_n();
    int a[n];
    input(n, a);
    float avg = odd_average(n, a);
    output(avg);
    return 0;
}
