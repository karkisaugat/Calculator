#include <stdio.h>
#include <stdlib.h>

void homepage() {
	cls();
	printCalculator();
  printf("\n\t\t1. Binary operations\n");
	printf("\n\t\t2. Permutation and Combination\n");
	printf("\n\t\t3. Exponential and Logarithm\n");
	printf("\n\t\t4. Age calculator\n");
	printf("\n\t\t5. Temperature Converter\n");
	printf("\n\t\t6. Length Converter\n");
	printf("\n\t\t7. Check number (prime, armstrong, dudeney, perfect ...)\n");
	printf("\n\t\t8. Solve Equations (Linear and Quadratic)\n");
	printf("\n\t\t9. Solve system of equation\n");
	printf("\n\t\t10. Matrix Operation\n");
	printf("\n\t\t11. Credit\n");
	printf("\n\t\t0. Exit\n");


	int choice = askChoice();

	validateChoice(choice, 1, 11);

	switch (choice)
	{
	// Binary operation page
	case 1:
		cls();
		BinaryOctalDecimal();
		continueOrExit();
		break;

	// Permutation combination page
	case 2:
		cls();
		PermutationCombination();
		continueOrExit();
		break;

	case 3:
		cls();
		ExponentialLogarithm();
		continueOrExit();
		break;
	
	case 4:
		cls();
		calculateAge();
		continueOrExit();
		break;

  case 5:
		cls();
   	temperatureConverter();
		continueOrExit();
    break;

  case 6:
		cls();
		lengthConverter();
		continueOrExit();
    break;

	case 7:
		cls();
		numberCheck();
		continueOrExit();
		break;

	case 8:
		cls();
		equationPage();
		continueOrExit();
		break;

	case 9:
		cls();
		linearEquations();
		continueOrExit();
		break;
	
	case 10: 
		cls();
		matrixOperation();
		continueOrExit();
		break;
		
	case 11:
		cls();
		credit();
		continueOrExit();
		break;

	case 0:
		cls();
		thankYouPage();
		break;
	}
}