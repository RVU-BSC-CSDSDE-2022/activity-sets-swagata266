//5. Write a C program to compare three numbers using **pass by value**

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

#include<stdio.h>
void main()
{
    int a,b,c,large;
    a=input();
    b=input();
    c=input();
    large=compare(a,b,c);
    output(a,b,c,large);

}
int input()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c)
{
    if ((a>b)&&(a>c))
    {
        return a;
    }
    else if((b>a)&&(b>c))
    {
        return b;
    }
    else
    {
        return c;
    }
}
void output(int a, int b, int c, int large)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,large);
}
