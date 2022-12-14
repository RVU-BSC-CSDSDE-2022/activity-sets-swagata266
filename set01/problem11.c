11. Write a C program to find the sum of 2 complex numbers
#include <stdio.h>

struct  complex
{
  float real;
  float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
  Complex a, b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b, sum);
  return 0;
}

Complex input_complex()
{
  Complex a;
  printf("enter the real part\n");
  scanf("%f", &a.real);
  printf("enter the imaginary part\n");
  scanf("%f", &a.imaginary);
  return a;
}

Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex sum)
{
  printf("The sum of %f+i%f and %f+i%f is %f+i%f\n",a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary );
}