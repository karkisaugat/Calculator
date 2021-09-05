#include <stdio.h>
#include <math.h>

float linear(float a, float b)
{
   float c;
   if(a == 0)
   {
      printf("\t\tThe value of A cannot be zero.\n");
      printf("\n\t\tEnter value for A: ");
   	  scanf("%f", &a);
   }
   else
   {
      c = -b / a;
   }
   return c;
}

void linearEquation()
{
  printEquation();
	printf("\t\tTo calculate values of linear equation of one variable Ax+B=0");
  	float a, b, c;
   	printf("\n\t\tEnter A Value:");
   	scanf("%f", &a);
   	printf("\t\tEnter B Value:");
   	scanf("%f", &b);
   	c = linear(a, b);
   	printf("\t\tValue of x is %0.2f, if a=%0.2f, b=%0.2f",c, a, b);
}

int quadraticEquation() {
    printEquation();
    float a, b, c, d, r1, r2, real, imag;
    printf("\t\tIn equation Ax^2 + Bx + C\n");
    printf("\t\tEnter value of A:");
    scanf("%f", &a);
    printf("\t\tEnter value of B:");
    scanf("%f", &b);
    printf("\t\tEnter value of C:");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d > 0) 
	{
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\t\tFirst Root = %.2f \n", r1);
        printf("\t\tSecond Root = %.2f \n", r2);
    }
    else if (d == 0)
	{
        r1 = r2 = -b / (2 * a);
        printf("\t\tSince dicriminant is Zero\n");
        printf("\t\tBoth roots are equal\n");
        printf("\t\tRoot = %.2f", r1);
    }
    else
	{
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("\t\tRoot1 = %.2f+%.2f i and Root2 = %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
} 

// Main page for equation

void equationPage() {
  printEquation();
  printf("\n\t\t1. Linear equation\n");
  printf("\n\t\t2. Quadratic equation\n");
  printf("\n\t\t0. Back to Main Menu");


  int choice = askChoice();
  validateChoice(choice, 1, 4);

switch (choice)
  {
  case 1:
    cls();
    linearEquation();
    break;
  case 2:
		cls();
    quadraticEquation();
    break;
  case 0:
    cls();
    homepage();
  default:
    break;
  }
}
