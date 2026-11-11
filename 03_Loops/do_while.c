#include <stdio.h>

int main() 
{
    int correctPin = 1234;
    int enteredPin;

    do {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin != correctPin)
        {
            printf("Incorrect PIN. Try again.\n");
         }
    }
    while (enteredPin != correctPin);

    printf("Access Granted!\n");
    return 0;
}
