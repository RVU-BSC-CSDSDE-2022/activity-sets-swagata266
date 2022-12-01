//8. Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int main(void)
{
  int n,i,sum=0;
  int a[n];
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the numbers\n");
  for (int i=0;i<n;i++)
    {
    scanf("%d",&a[n]);
    sum=sum+a[n];
    }
printf("The sum of the numbers is %d",sum);
}

// #include <stdio.h>
// int main()
// {
//    int n, sum = 0, c, array[100];
//   printf("Enter the size of the array\n");

//    scanf("%d", &n);
//   printf("Enter the numbers\n");

//    for (c = 0; c < n; c++)
//    {
//       scanf("%d", &array[c]);
//       sum = sum + array[c];
//    }

//    printf("Sum = %d\n", sum);

//    return 0;
// }