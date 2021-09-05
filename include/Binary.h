#include <stdio.h>
#include <math.h>

// Convert Decimal into binary
void convertDecimalToBinary()
{
	printBinary();
	// Taking long data type to prevent limitation.
	long bin = 0;
	long num = 0;
	printf("\n\t\tEnter the decimal number: ");
	scanf("%ld", &num);

	// Calculate till the num becomes 0 storing in temp before manipulating original num.
	long temp = num;
	int rem, i = 1;
	while (temp != 0)
	{
		rem = temp % 2;
		temp /= 2;
		bin += rem * i;
		i *= 10;
	}
	printf("\n\t\t%ld in decimal = %ld in binary", num, bin);
}

// Convert Binary to Decimal

void convertBinaryToDecimal()
{
	printBinary();
	// Taking long data type
	long bin;
	printf("\n\t\tEnter the binary number: ");
	scanf("%ld", &bin);

	// Multiply individual number of bin by consecutive power of 2.
	long temp = bin;
	int dec = 0, i = 0, rem;
	while (temp != 0)
	{
		rem = temp % 10;
		temp /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	printf("\n\t\t%ld in binary = %d in decimal", bin, dec);
}

void convertDecimalToOctal()
{
	printBinary();
	int oct = 0, i = 1;
	int dec;
	printf("\n\t\tEnter the decimal number: ");
	scanf("%d", &dec);

	int temp = dec;

	while (temp != 0)
	{
		oct += (temp % 8) * i;
		temp /= 8;
		i *= 10;
	}

	printf("\n\t\t%d in decimal = %d in octal", dec, oct);
}

void convertOctalToDecimal()
{
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    int decimalNumber = 0, i = 0;
    int temp = octalNumber;
    while(temp != 0)
    {
        decimalNumber += (temp%10) * pow(8,i);
        ++i;
        temp/=10;
    }

    printf("%d in octal = %d in decimal", octalNumber, decimalNumber);
}

//The main page for the Binary, Octal and Decimal calculation.

void BinaryOctalDecimal()
{
	printBinary();
	// Print the template to for the sub mode.
	printf("\n\t\t1. Convert decimal to binary\n");
	printf("\n\t\t2. Convert binary to decimal\n");
	printf("\n\t\t3. Convert decimal to octal\n");
	printf("\n\t\t4. Convert octal to decimal\n");
	printf("\n\t\t0. Back to Main Menu\n");


	// Making choice
	int choice = askChoice();

	switch (choice)
	{
	case 1:
		cls();
		convertDecimalToBinary();
		break;
	case 2:
		cls();
		convertBinaryToDecimal();
		break;
	case 3:
		cls();
		convertDecimalToOctal();
		break;
	case 4:
		cls();
		convertOctalToDecimal();
		break;
	case 0:
		homepage();
		break;
	}
}
