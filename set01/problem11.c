11. Write a C program to find the sum of 2 complex numbers
#include<stdio.h>
struct complex_no
{
	float real;
	float img;
};
typedef struct  complex_no  Complex;  //Complex is a new variable type
Complex input_complex();        //input_complex() is for inputting the real and imaginary parts of the complex numbers 
Complex add_complex(Complex a, Complex b); //user defined function to add the 2 numbers Complex a and b were not declared before this
void output(Complex a, Complex b, Complex sum); 


int main()
{
     Complex c1, c2, sum; //all are of typedef user def variable
     c1=input_complex();  //c1.real and c1.img are stored here
     c2=input_complex();  //c2.real and c2.img are stored
     sum=add_complex(c1, c2); //c1 and c2 have the stored complex numbers and we pass them from the main function to the user def func
     output(c1,c2,sum); //displays final result. passing c1,c2 and sum
     return 0;
}

Complex input_complex()   
{
    Complex c; //we need to declare separate variables for user def functions
    printf("Enter the real part of the number\n");
    scanf("%f", &c.real);
    printf("Enter the imaginary part of the number\n");
    scanf("%f", &c.img);
    return c;
}

Complex add_complex(Complex a, Complex b) //a and b store c1 and c2 as Complex datatype
{
     Complex sum; //loop variable
     sum.real=a.real+b.real;
     sum.img=a.img+b.img;
     return sum;
}

void output(Complex a, Complex b, Complex sum) 
{
   printf("The sum of %.2f+%.2fi and %.2f+%.2fi is %.2f+%.2fi\n", a.real,a.img, b.real, b.img, sum.real,sum.img);
}