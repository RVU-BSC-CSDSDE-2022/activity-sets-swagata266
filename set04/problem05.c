//5. Write a program to find the index of the largest number in an array
#include <stdio.h>

int input_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int max = a[0], index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    return index;
}

void output(int index) {
    printf("The index of the largest element is %d\n", index);
}

int main() {
    int n, a[100], index;
    n = input_size();
    input_array(n, a);
    index = find_largest_index(n, a);
    output(index);
    return 0;
}
