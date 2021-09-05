#include <stdio.h>
#include <math.h>

// Factorial 
int fact(int a)
{
  int sum = 1;
  for (int i = 1; i <= a; i++)
  {
    sum = sum * i;
  }
  return sum;
}

// Permutation
void permutation(void)
{
  printPermu();
  int n, r;
  printf("\t\tEnter n,r for permutation: ");
  scanf("%d %d", &n, &r);

  while (r>n) {
    printf("\n\t\tEnter the valid value for n or r.\n\t\tValue of r is greater than value of n.\n");
    printf("\n\t\tEnter n,r for permutation: ");
    scanf("%d %d", &n, &r);
  }

  int a = fact(n);
  int b = fact(n - r);
  int per = a / (b);
  printf("\n\t\tPermutation = %d\n", per);
}

// Combination
void combination(void)
{
  printPermu();
  int n, r;
  printf("\n\t\tEnter n,r for combination: ");
  scanf("%d %d", &n, &r);

  // while r > n, ask for valid input.
  while (r>n) {
    printf("\n\t\tEnter the valid value for n or r.\n\t\tsValue of r is greater than value of n.\n");
    printf("\n\t\tEnter n,r for combination: ");
    scanf("%d %d", &n, &r);
  }

  int a = fact(n);
  int b = fact(n - r);
  int c = fact(r);
  int d = b * c;
  float comb = (float) a / d;

  printf("\n\t\tCombination = %.2f\n", comb);
}

// Main function for the permutation and combination
void PermutationCombination(void)
{
  printPermu();
  printf("\n\t\t1. Permutation\n");
  printf("\n\t\t2. Combination\n");
	printf("\n\t\t0. Back to Main Menu\n");

  // printf("Enter between 1-6\n1.permutation\n2.combination\n3.exponential\n4.logarithm\n5.perfect\n6.mstrong\n ");
  int choice = askChoice();
  validateChoice(choice, 1, 6);
    switch (choice)
    {
    case 1:
      cls();
      permutation();
      break;
    case 2:
      cls();
      combination();
      break;
    case 0:
      homepage();
      break;
    }
}