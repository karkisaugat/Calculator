#include <stdio.h>

// Meter to inch
void meterToInch() {
  printLengthConverter();
  float meter, result;
  printf("\n\t\tEnter the magnitude of length in meter:");
  scanf("%f", &meter);
  result = meter * 39.3071;
  printf("\n\t\tThe equivalent length in inch is: %f", result);
}

// Meter to millimeter
void meterToMillimeter() {
  printLengthConverter();
  float meter, result;
  printf("\n\t\tEnter the magnitude of length in meter:"); // In millimeter.
  scanf("%f", &meter);
  result = meter * 1000;
  printf("\n\t\tThe equivalent length in millimeter is: %f", result);
}

// Meter to foot
void meterToFoot() {
  printLengthConverter();
  float meter, result;
  printf("\n\t\tEnter the magnitude of length in meter: "); // In foot.
  scanf("%f", &meter);
  result = meter * 3.28084;
  printf("\n\t\tThe equivalent length in foot is: %f", result);
}

// Meter to yard
void meterToYard() {
  printLengthConverter();
  float meter, result;
  printf("\n\t\tEnter the magnitude of length in meter: ");
  scanf("%f", &meter);
  result = meter * 1.09361;
  printf("\n\t\tThe equivalent length in yard is: %f", result); // In yard.
}

// Main page for the length converter
void lengthConverter() {
  printLengthConverter();
  printf("\n\t\t1. Inch\n");
  printf("\n\t\t2. Millimeter\n");
  printf("\n\t\t3. Foot\n");
  printf("\n\t\t4. Yard\n");
  printf("\n\t\t0. Back to Main Menu\n");

  int choice = askChoice();
  validateChoice(choice, 1, 4);

  switch (choice)
  {
  case 1:
    cls();
    meterToInch();
    break;
  case 2:
    cls();
    meterToMillimeter();
    break;
  case 3:
    cls();
    meterToFoot();
    break;
  case 4:
    cls();
    meterToYard();
  break;
  case 0:
    homepage();
    break;
  }

}