//6. Write a C program to compare three numbers using **pass by reference**
#include<stdio.h>
int main(void)
{
  int a,b,c,result;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  printf("Enter the third number\n");
  scanf("%d",&c);
  result=comp_func(&a,&b,&c);
  printf("The greatest of the 3 numbers is %d",result);
  return(0);
}
comp_func(int *a,int *b,int *c)
{
  int temp;
  if((*a>*b)&(*a>*c))
  {
    temp=*a;
  }
  else if((*b>*a)&(*b>*c))
  {
    temp=*b;
  }
  else
  {
    temp=*c;
  }

return temp;
}


