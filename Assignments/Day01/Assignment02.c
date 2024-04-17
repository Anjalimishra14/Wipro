/*Flowchart Creation - Design a flowchart that outlines the logic for a user
 login process. It should include conditional paths for successful and 
 unsuccessful login attempts, and a loop that allows a user three attempts 
 before locking the account.*/


#include <stdio.h>
#include <string.h>

int main() {

    char studentID[] = "User123";
    char password[] = "123456";

    char inputID[20]; // Buffer for user input ID
    char inputPassword[20]; // Buffer for user input password
    int attempts = 0; // Number of login attempts

    while (attempts < 3) {
        printf("\nEnter Student ID: ");
        scanf("%s", inputID);

        printf("Enter Password: ");
        scanf("%s", inputPassword);

        int idMatch = strcmp(inputID, studentID);
        int passwordMatch = strcmp(inputPassword, password);

        if (idMatch == 0 && passwordMatch == 0) {
            printf("\nSuccessfully Logged In!\n");
            break; // Exit the loop on successful login
        } else {
            printf("\nWrong ID or Password. Try again (%d attempts left).\n", 3 - attempts);
            attempts++;
        }
    }

    if (attempts >= 3) {
        printf("\n Your account has been locked\n");
    }

    return 0;
}
