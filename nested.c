#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the greatest number using nested if
    if (num1 >= num2) {  
        if (num1 >= num3) {
            printf("The greatest number is: %d\n", num1);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    } else {  
        if (num2 >= num3) {
            printf("The greatest number is: %d\n", num2);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    }

    return 0;
}
