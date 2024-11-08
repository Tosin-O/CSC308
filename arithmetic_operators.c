#include <stdio.h>
int main ()
{
    int val_1, val_2, output;
    printf("Enter first value: ");
    scanf("%d", &val_1);
    printf("Enter second value: ");
    scanf("%d", &val_2);

    output = val_1+val_2;
    printf("Value 1 + Value 2 = %d \n",output);
    output = val_1-val_2;
    printf("Value 1 - Value 2 = %d \n",output);
    output = val_1*val_2;
    printf("Value 1 * Value 2 = %d \n",output);
    output = val_1/val_2;
    printf("Value 1 / Value 2 = %d \n",output);
    output = val_1%val_2;
    printf("Remainder when Value 1 divided by Value 2 = %d \n",output);

    return 0;
}