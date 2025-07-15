#include <stdio.h>

int main() {
    int num;

    // Read an integer from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Print octal and hexadecimal representations
    printf("Octal representation: %o\n", num);
    printf("Hexadecimal representation: %x\n", num);

    return 0;
}
