#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start, end, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    start = 0;
    end = strlen(str) - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
