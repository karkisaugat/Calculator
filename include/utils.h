#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This clears the screen
void cls() {
  system("cls");
}


// Continue or exit
void continueOrExit() {
  char input;
  printf("\n\n\tDo you want to continue? (y/n): ");
  scanf(" %c", &input);
  while (input != 'y' && input != 'n') {
    printf("\n\tEnter valid input!!!");
    printf("\n\tDo you want to continue? (y/n): ");
    scanf(" %c", &input);
  }

  if (input == 'y') {
    homepage();
  }
  else if(input == 'n') {
    cls();
    thankYouPage();
  }

}

// Delays the execution by microsecond
void delay(int microsecond)
{
// Storing start time
clock_t start_time = clock();
// looping till required time is not achieved
while (clock() < start_time + microsecond) ;
}

