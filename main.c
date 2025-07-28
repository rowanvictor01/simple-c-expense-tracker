// ToDo: Implement input validation
// Create input validation function

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayMenu();
int getSelection();
void addExpense();
void displayExpense();
double sumOfExpenses();
void pushDesc(char item[]);
void pushAmount(float item);

// global variables
char descriptions[99][50];
float amounts[99];
short expenseCount = 0;

// main program
int main() {
    short hasExited = false;

    do {
        // show menu and get user choice
        displayMenu();
        int userChoice = getSelection();

        if (userChoice == 1) {
            addExpense();
        } else if (userChoice == 2) {
            displayExpense();
        } else if (userChoice == 3) {
            // call show total function
            displayExpense();
            double result = sumOfExpenses();
            printf("\n##############################\nYour total expenses "
                   "amounts to %lf\n",
                   result);
        } else if (userChoice == 4) {
            printf("Closing program...\n");
            hasExited = true;
        } else {
            printf("\nInvalid entry: Number selected not in the options.\n");
        }
    } while (!hasExited);

    return 0;
}

// functions definitions
void displayMenu() {
    printf("\n=== Expense Tracker ===\n");
    printf("[1]Add Expense\n[2]View All Expenses\n[3]Show Total\n[4]Exit\n");
}

int getSelection() {
    printf("\nChoice: ");

    int userChoice = 0;
    scanf("%d", &userChoice);

    return userChoice;
}

void addExpense() {
    // used amounts array since both global arrays have the same maximum
    // capacity
    if (expenseCount >= sizeof(amounts) / sizeof(amounts[0])) {
        printf("You have reached the maximum storage limit.\n");
        return;
    }

    char desc[50] = "";
    float expAmount = 0;

    printf("Enter description: ");
    scanf(" %[^\n]", desc);
    printf("Enter amount: ");
    scanf("%f", &expAmount);

    // store infos to respective array
    pushDesc(desc);
    pushAmount(expAmount);

    printf("Expense Saved!\n");

    expenseCount++;
}

void displayExpense() {
    for (short i = 0; i < expenseCount; i++) {
        printf("\nExpense Item: %s\n", descriptions[i]);
        printf("Expense Amount: %.2f\n", amounts[i]);
    }
}

double sumOfExpenses() {
    double sum = 0;
    int decimalPlaces = 2;

    for (short i = 0; i <= expenseCount; ++i) {
        sum += amounts[i];
    }

    double factor = pow(10, decimalPlaces);
    double roundedSum = round(sum * factor) / factor;

    return roundedSum;
}

// function for adding items to descriptions array
void pushDesc(char item[]) {
    // expenseCount tracks how many items stored in the array
    strcpy(descriptions[expenseCount], item);
}

// function for adding items to amounts array
void pushAmount(float item) { amounts[expenseCount] = item; }
