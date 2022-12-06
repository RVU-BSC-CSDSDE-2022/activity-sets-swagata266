#include <stdio.h>

int input();
int sum_n_nos(int n);
void output(int n , int sum);

int main()
{
  int n,sum=0;
  n=input();
  sum=sum_n_nos(n);
  output(n, sum);
  return 0;
}
int input()
{
  int n;
  printf("Enter the range of natural numbers to add\n");
  scanf("%d", &n);
  return n;
}

int sum_n_nos(int n)
{
  int sum=0;
  for(int i=1; i<=n; i++)
    {
       sum=sum+i;
    }
  return sum;
}

void output(int n, int sum)
{
  printf("The sum of %d natural numbers is %d\n", n, sum);
}