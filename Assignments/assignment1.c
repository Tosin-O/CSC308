#include <stdio.h>

int main() {
    char type;
    printf("Enter 'c' for character, 'f' for float, or 'i' for integer: ");
    scanf(" %c", &type);

    switch (type) {
        case 'c': {
            char inputChar;
            printf("Enter a character: ");
            scanf(" %c", &inputChar);

            printf("\nCharacter Input: %c\n", inputChar);
            printf("Size of character: %lu byte(s)\n", sizeof(inputChar));

            for (int i = 1; i <= 4; i++) {
                char nextChar = inputChar + (3 * i);
                printf("Next character #%d: %c (ASCII: %d)\n", i, nextChar, (int)nextChar);
            }
            break;
        }

        case 'f': {
            float inputFloat;
            printf("Enter a float: ");
            scanf("%f", &inputFloat);

            printf("\nFloat Input: %f\n", inputFloat);
            printf("Size of float: %lu byte(s)\n", sizeof(inputFloat));

            for (int i = 1; i <= 4; i++) {
                float nextFloat = inputFloat + (3.0f * i);
                printf("Next float #%d: %f\n", i, nextFloat);
            }
            break;
        }

        case 'i': {
            int inputInt;
            printf("Enter an integer: ");
            scanf("%d", &inputInt);

            printf("\nInteger Input: %d\n", inputInt);
            printf("Size of integer: %lu byte(s)\n", sizeof(inputInt));

            for (int i = 1; i <= 4; i++) {
                int nextInt = inputInt + (3 * i);
                printf("Next integer #%d: %d (ASCII: %d)\n", i, nextInt, nextInt);
            }
            break;
        }

        default:
            printf("Invalid input type.\n");
            break;
    }

    return 0;
}
