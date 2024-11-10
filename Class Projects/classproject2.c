#include <stdio.h>

int main() {
    int experience;
    int age;
    int salary;

    //input user experience and age
    printf("Enter experience (1 for experienced, 0 for inexperienced): ");
    scanf("%d", &experience);
    printf("Enter age: ");
    scanf("%d", &age);

    //salary based on experience and age
    if (experience == 1) { // If experienced
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age < 40) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 0; 
        }
    } else { // If inexperienced
        salary = 100000;
    }

    // Display the salary
    if (salary > 0) {
        printf("The salary of the person is: N%d\n", salary);
    } else {
        printf("Salary not defined for the given age and experience level.\n");
    }

    return 0;
}
