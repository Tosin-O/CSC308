#include <stdio.h>

// the three questions in class project 1 as functions
void checkVotingEligibility();
void calculateTotalAveragePercentage();
void printNextCharacters();

int main() {
    int choice;

    // pick between the three question option
    printf("Select an option:\n");
    printf("1. Check voting eligibility\n");
    printf("2. Calculate total, average, and percentage of marks\n");
    printf("3. Print next 6 characters from a character between A to J\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    // use the switch function to respond based on the choice
    switch (choice) {
        case 1:
            checkVotingEligibility();
            break;
        case 2:
            calculateTotalAveragePercentage();
            break;
        case 3:
            printNextCharacters();
            break;
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}

// Function to check voting eligibility
void checkVotingEligibility() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age > 18) {
        printf("You can vote\n");
    } else {
        printf("You cannot vote\n");
    }
}

// Function to calculate total, average, and percentage of marks
void calculateTotalAveragePercentage() {
    float csc201, csc205, sta205;
    float total, average, percentage;

    
    printf("Enter marks for CSC 201 out of 100: ");
    scanf("%f", &csc201);

    printf("Enter marks for CSC 205 out of 100: ");
    scanf("%f", &csc205);

    printf("Enter marks for STA 205 out of 100: ");
    scanf("%f", &sta205);

    // Calculate total, average, and percentage
    total = csc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total / 300) * 100; 

    // Display the results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
}

// Function to print the next 6 characters from a character between A to J
void printNextCharacters() {
    char ch;

    
    printf("Enter a character between A and J: ");
    scanf(" %c", &ch);

    // Check if the character is within the range A to J
    if (ch >= 'A' && ch <= 'J') {
        printf("The next 6 characters are: ");
        
        for (int i = 1; i <= 6; i++) {
            printf("%c ", ch + i);
        }
        printf("\n");
    } else {
        printf("Please enter a valid character between A and J.\n");
    }
}
