#include <stdio.h>
#include <string.h>

// Function to reverse a string using two-pointer approach
void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        // Swap characters
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move pointers toward center
        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Input string (no spaces)

    printf("\nOriginal String: %s", str);

    reverseString(str);

    printf("\nReversed String: %s\n", str);

    return 0;
}
