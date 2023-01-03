//12.Write a C program to add two numbers using pass by reference.

#include <stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
    int a, b, sum;

    a = input();
    b = input();

    add(a, b, &sum);

    output(a, b, sum);

    return 0;
}

int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

void add(int a, int b, int *sum)
{
    *sum = a + b;
}
void output(int a, int b, int sum)
{
    printf("%d + %d = %d\n", a, b, sum);
}
