#include <stdio.h>

int main() {
    int i, choice;

    for (i = 1; i <= 5; i++) {
        printf("Iteration %d: Enter a number (1, 2, or 3): ", i);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You entered 1.\n");
                continue;  // Continue to the next iteration of the loop

            case 2:
                printf("You entered 2.\n");
                break;  // Break out of the switch, continue the loop

            case 3:
                printf("You entered 3.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
                continue;  // Continue to the next iteration of the loop
        }

        printf("End of switch-case block for iteration %d.\n", i);
    }

    printf("Loop complete.\n");
    return 0;
}
