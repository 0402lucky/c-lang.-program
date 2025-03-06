#include <stdio.h>

// Function to check if a three-digit number is a palindrome
int isPalindrome(int num) {
    if (num < 100 || num > 999) {
        return 0; // Ensure it's a three-digit number
    }
    
    int first = num / 100;        // Extract first digit
    int last = num % 10;          // Extract last digit
    
    return first == last; // A three-digit number is a palindrome if first and last digits are the same
}

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    
    return 0;
}
