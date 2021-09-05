#include <stdio.h>

void celcius() {
  printTemperatureConverter();
  float temperature, result;
  printf("\n\t\tInsert the temperature in Celcius: ");
  scanf("%f", &temperature);
  result = (temperature * 1.8) + 32;
  printf("\n\t\tFahrenheit : %.2f Fahrenheit\n", result);
  result = temperature * 0.8;
  printf("\t\tReamur   : %.2f Reamur\n", result);
  result = temperature + 273.15;
  printf("\t\tKelvin    : %.2f Kelvin\n", result);
}

void fahrenheit() {
  printTemperatureConverter();
  float temperature, result;
  printf("\n\t\tInsert the temperature in Fahrenheit: ");
  scanf("%f", &temperature);
  result = (temperature - 32) / 1.8;
  printf("\n\t\tCelcius   : %.2f Celcius\n", result);
  result = (temperature - 32) / 2.25;
  printf("\t\tReamur   : %.2f Reamur\n", result);
  result = ((temperature - 32) / 1.8) + 273.15;
  printf("\t\tKelvin    : %.2f Kelvin\n", result);
}

void reamur() {
  printTemperatureConverter();
  float temperature, result;
  printf("\n\t\tInsert the temperature in Reamur: ");
  scanf("%f", &temperature);
  result = temperature / 0.8;
  printf("\n\t\tCelcius   : %.2f Celcius\n", result);
  result = (temperature * 2.25) + 32;
  printf("\t\tFarenheit : %.2f Fahrenheit\n", result);
  result = (temperature / 0.8) + 273.15;
  printf("\t\tKelvin    : %.2f Kelvin\n", result);
}

void kelvin() {
  printTemperatureConverter();
  float temperature, result;
  printf("\n\t\tInsert the temperature : ");
  scanf("%f", &temperature);
  result = temperature - 273.15;
  printf("\n\t\tCelcius   : %.2f Celcius\n", result);
  result = ((temperature - 273.15) * 1.8) + 32;
  printf("\t\tFarenheit : %.2f Fahrenheit\n", result);
  result = (temperature - 273.15) * 0.8;
  printf("\t\tReamur   : %.2f Reamur\n", result);
}

void temperatureConverter() {
  printTemperatureConverter();
  printf("\n\t\tSelect the temperature unit you want to convert : \n");
  printf("\n\t\t1. Celcius\n");
  printf("\n\t\t2. Fahrenheit\n");
  printf("\n\t\t3. Reamur\n");
  printf("\n\t\t4. Kelvin\n");
	printf("\n\t\t0. Back to Main Menu\n");

  int choice = askChoice();

  validateChoice(choice, 1, 4);

  switch (choice)
  {
  case 1:
    cls();
    celcius();
    break;
  case 2:
    cls();
    fahrenheit();
    break;
  case 3:
    cls();
    reamur();
    break;
  case 4:
    cls();
    kelvin();
    break;
  case 0:
    homepage();
    break;
  }
}


