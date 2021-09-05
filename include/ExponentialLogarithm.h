#include <stdio.h>
#include <math.h>

void exponential(void)
{
  printExponentialAndLogarithm();
  printf("\n\t\tEnter the value for the exponential calculation : ");
  float a;
  scanf("%f", &a);
  float b = exp(a);
  printf("\n\t\tExponential of %0.3f = %0.3f\n", a, b);
}

// Logarithm
void logarithm(void)
{
  printExponentialAndLogarithm();
  float a;
  printf("\n\t\tEnter the value for logarithm base e: ");
  scanf("%f", &a);
  float b = log(a);
  printf("\n\t\tNatural logarithm of %0.3f = %0.3f\n", a, b);
}

void ExponentialLogarithm() {
  printExponentialAndLogarithm();
  printf("\n\t\t1. Exponential\n");
  printf("\n\t\t2. Logarithm\n");
	printf("\n\t\t0. Back to Main Menu\n");

  // Ask for the input
  int choice = askChoice();
  
  // Validate choice if it is within the range
  validateChoice(choice, 1, 2);

  switch (choice)
  {
  case 1:
    cls();
    exponential();
    break;

  case 2:
    cls();
    logarithm();
    break;

  case 0:
    homepage();
    break;
  }
}