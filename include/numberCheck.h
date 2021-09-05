#include <stdio.h>

int perfect_check(int numbr)
{
  int a, sum = 0;
  for (a = 1; a < numbr / 2; a++)
  {
    if (numbr % a == 0)
      sum = sum + a;
  }
  return (sum);
}

// Check if the given number is perfect or not
void perfectNumber(void)
{
  printNumberCheck();
  int num, s;
  printf("\t\tEnter a integer for perfect no check :\t ");
  scanf("%d", &num);
  s = perfect_check(num);
  if (s == num)
    printf("\n\t\t%d is a perfect number", num);
  else
    printf("\n\t\t%d is not a perfect number\n", num);
}

void armstrongNumber(void)
{
  printNumberCheck();
  int num, a, rem, r = 0, n = 0;

  printf("\t\tEnter an integer for armstrong number check :\t ");
  scanf("%d", &num);

  a = num;

  while (a != 0)
  {
    a /= 10;
    ++n;
  }

  a = num;

  while (a != 0)
  {
    rem = a % 10;
    r += rem * rem * rem;
    a /= 10;
  }

  if (r == num)
    printf("\t\t%d is an Armstrong number\n", num);
  else
    printf("\t\t%d is not an Armstrong number\n", num);
}

// Check if the given number is dudeney
void dudeneyNumber()
{
  printNumberCheck();
  int number, rem, sum;
  printf("\n\t\tEnter any number: ");
  scanf("%d", &number); // number stores number
  int temp = number;
  while (temp > 0)
  {                  // temp is a temporary variable
    rem = temp % 10; // rem is stores remainder
    sum = sum + rem; // sum stores sum
    temp = temp / 10;
  }
  if (sum * sum * sum == number)
  {
    printf("\n\t\tThe number is a dudeney number.");
  }
  else
  {
    printf("\n\t\tThe number is not a dudeney number.");
  }
}

// Check if the given number is prime
void primeNumber()
{
  int num, f, count;
  printNumberCheck();
  // To check whether prime or not.
  printf("\n\t\tEnter any number:");
  scanf("%d", &num);
  for (f = 1; f <= num; f++)
  {
    if (num % f == 0)
    {
      count++;
    }
  }
  if (count == 2)
    printf("\t\t%d is prime number.", num);

  else
    printf("\t\t%d is not prime number.", num);
}

// Main page for number check
void numberCheck()
{
  printNumberCheck();
  printf("\n\t\t1. Perfect Number\n");
  printf("\n\t\t2. Armstrong Number\n");
  printf("\n\t\t3. Dudeney Number\n");
  printf("\n\t\t4. Prime Number\n");
  printf("\n\t\t0. Back to Main Menu\n");

  int choice = askChoice();
  validateChoice(choice, 1, 4);

  switch (choice)
  {
  case 1:
    cls();
    perfectNumber();
    break;
  case 2:
    cls();
    armstrongNumber();
    break;
  case 3:
    cls();
    dudeneyNumber();
    break;
  case 4:
    cls();
    primeNumber();
    break;
  case 0:
    homepage();
    break;
  }
}