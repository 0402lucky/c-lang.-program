#include <stdio.h>

// Function Prototypes (Declarations)
void add();
void sub();
int divide(int a, int b);
float mul(float a, float b);

int main() {
    // Calling functions for testing
    add();
    sub();

    int a, b;
    printf("Enter two integers for division: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        printf("Division Result: %d\n", divide(a, b));
    }

    float x, y;
    printf("Enter two numbers for multiplication: ");
    scanf("%f %f", &x, &y);
    printf("Multiplication Result: %.2f\n", mul(x, y));

    return 0;
}

// Function Definitions
void add() {
    int a, b, c;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Addition Result: %d\n", c);
}

void sub() {
    int a, b, c;
    printf("Enter two numbers for subtraction: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Subtraction Result: %d\n", c);
}

int divide(int a, int b) {
    return a / b; // Integer division
}

float mul(float a, float b) {
    return a * b; // Floating-point multiplication
}


