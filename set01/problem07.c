//7. Write a C program to find sum of all natural numbers until _n_
#include<stdio.h>
int main(void)
{
  int a,sum;
  printf("Enter the number\n");
  scanf("%d",&a);
  sum=sum_func(a);
  printf("The sum of all the numbers till %d is %d",a,sum);
  return(0);
}
int sum_func(int a)
{
  int sum;
  sum=(a*(a+1))/2;
  return sum;
}

