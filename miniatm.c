#include <stdio.h>
#include <string.h>

#define PIN "1234"

// Function declarations
int login();
void displayMenu();
void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main() {
    if (!login()) return 0; // Login before proceeding

    int balance = 1000; // Initial balance
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// PIN login system
int login() {
    char input[10];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%s", input);

        if (strcmp(input, PIN) == 0) {
            printf("Login successful!\n");
            return 1;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("Too many incorrect attempts. Access blocked.\n");
    return 0;
}

// ATM Functionalities
void displayMenu() {
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

void checkBalance(int balance) {
    printf("Your current balance is: Rs. %d\n", balance);
}

int deposit(int balance) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Rs. %d deposited successfully.\n", amount);
    } else {
        printf("Invalid amount.\n");
    }

    return balance;
}

int withdraw(int balance) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Rs. %d withdrawn successfully.\n", amount);
    } else {
        printf("Invalid or insufficient amount.\n");
    }

    return balance;
}
    
        