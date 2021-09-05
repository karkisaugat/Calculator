#include <stdio.h>

// Ask for input from the user.
int askChoice() {
    int choice;
    printf("\n\tEnter the mode of calculation: ");
    scanf("   %d", &choice);
    return choice;
}

// Validate if the choice is within the range
void validateChoice(int choice, int begin, int end) {
    // Ask for the valid choice.

    if (choice == 0) {
        return;
    }

    while (choice < begin || choice > end) {
        printf("\n\tEnter a valid number!!!");
        choice = askChoice();
    }
}
